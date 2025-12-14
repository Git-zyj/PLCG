#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 134975110;
unsigned int var_6 = 263587017U;
int var_10 = -1776142573;
unsigned short var_11 = (unsigned short)39287;
short var_12 = (short)12646;
int var_15 = -1986945760;
int zero = 0;
short var_18 = (short)-18291;
int var_19 = -137026769;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
