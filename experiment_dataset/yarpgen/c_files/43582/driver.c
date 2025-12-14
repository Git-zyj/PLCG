#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20716;
int var_4 = 2073026045;
unsigned long long int var_5 = 15739141896021057807ULL;
int var_11 = 998762467;
int var_13 = -591824070;
unsigned short var_14 = (unsigned short)51998;
int zero = 0;
signed char var_15 = (signed char)88;
unsigned long long int var_16 = 10576406313966388924ULL;
int var_17 = 1584271396;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
