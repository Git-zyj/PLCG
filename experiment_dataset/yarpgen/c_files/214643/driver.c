#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12887;
int var_3 = -902746120;
long long int var_4 = -6300974767739890218LL;
short var_6 = (short)3263;
short var_8 = (short)4593;
short var_15 = (short)21076;
int zero = 0;
unsigned long long int var_18 = 12617014491146205457ULL;
long long int var_19 = 1750871061475044889LL;
short var_20 = (short)-13107;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
