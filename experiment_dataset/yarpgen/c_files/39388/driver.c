#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)52280;
unsigned long long int var_8 = 12302168182847152182ULL;
short var_10 = (short)-14423;
int zero = 0;
short var_11 = (short)-29386;
long long int var_12 = 7489948064758902713LL;
signed char var_13 = (signed char)-96;
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
