#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13473;
unsigned int var_8 = 3600053297U;
unsigned int var_10 = 584021650U;
int zero = 0;
unsigned char var_16 = (unsigned char)128;
short var_17 = (short)-2243;
unsigned long long int var_18 = 5645283066879172183ULL;
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
