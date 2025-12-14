#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 572883183;
int var_3 = -57764740;
short var_4 = (short)-25407;
unsigned long long int var_6 = 14032990644110763240ULL;
unsigned long long int var_8 = 9737578616478937458ULL;
int zero = 0;
unsigned long long int var_14 = 13893208076093116791ULL;
short var_15 = (short)-11423;
signed char var_16 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
