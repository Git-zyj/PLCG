#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29740;
unsigned int var_1 = 2418313914U;
unsigned int var_3 = 4038125693U;
unsigned long long int var_4 = 9377383259666116280ULL;
short var_5 = (short)19140;
unsigned char var_7 = (unsigned char)114;
short var_8 = (short)-22762;
short var_9 = (short)-14989;
int zero = 0;
unsigned int var_10 = 4171852521U;
short var_11 = (short)-1714;
short var_12 = (short)-18778;
signed char var_13 = (signed char)114;
long long int var_14 = -3878438691904680879LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
