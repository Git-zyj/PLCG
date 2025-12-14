#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21065;
short var_4 = (short)-22570;
unsigned int var_8 = 998926389U;
short var_10 = (short)12208;
short var_11 = (short)-30495;
int var_12 = -1670017065;
short var_13 = (short)16470;
int var_14 = 1022484607;
int zero = 0;
short var_17 = (short)13800;
short var_18 = (short)-28788;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
