#include <stdio.h>

int main(int argc, char* argv[])
{
	int n;
	char c;
	int sum = 1; /* 当前的和   */
	int t;       /* 合理的和   */
	int col = 1; /* 当前的星数 */
	scanf_s("%d %c", &n, &c, 2);
	while (sum <= n) {
		t = sum;
		col += 2;
		sum += col * 2;
	}
	col -= 2;    /* 合理的星数 */

	int b = 0;
	int row = col;   /* 待打印的行数 */
	int flag = 1;
	for (int i = 0; i < row; ++i) {
		for (int z = 0; z < b; ++z) {
			printf(" ");
		}
		for (int j = 0; j < col; ++j) {
			printf("%c", c);
		}
		if (col != 1 && flag) {
			col -= 2;
			++b;
		}
		else if (col == 1 || !flag) {
			col += 2;
			--b;
			flag = 0;
		}
		printf("\n");
	}
	printf("%d\n", n - t);
	return 0;
}