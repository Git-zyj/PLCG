#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27553;
short var_1 = (short)-1649;
unsigned long long int var_2 = 6667286457462646818ULL;
short var_7 = (short)-32020;
int zero = 0;
long long int var_11 = 4711298434685867949LL;
unsigned char var_12 = (unsigned char)145;
short var_13 = (short)17637;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
