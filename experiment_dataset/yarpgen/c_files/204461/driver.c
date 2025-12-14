#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6792189629993250726LL;
short var_13 = (short)-25440;
short var_14 = (short)-24657;
int zero = 0;
short var_16 = (short)-23532;
short var_17 = (short)-22580;
signed char var_18 = (signed char)-91;
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
