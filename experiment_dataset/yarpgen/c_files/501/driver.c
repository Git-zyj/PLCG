#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 941401968;
long long int var_2 = -4698065399793401890LL;
short var_4 = (short)-30690;
int var_6 = -1979585463;
short var_7 = (short)8364;
long long int var_9 = -4299107288062236961LL;
int var_13 = 828409463;
short var_14 = (short)24957;
int zero = 0;
int var_16 = 556323149;
short var_17 = (short)-22933;
unsigned int var_18 = 3364465965U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
