#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 573808536U;
unsigned int var_3 = 1960296674U;
long long int var_4 = 3513289121227658563LL;
short var_8 = (short)-26993;
long long int var_15 = -8235278923253547229LL;
unsigned long long int var_16 = 15068660779480591896ULL;
unsigned char var_18 = (unsigned char)176;
int zero = 0;
short var_19 = (short)-4360;
unsigned int var_20 = 1736670054U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
