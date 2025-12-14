#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1744044668U;
unsigned long long int var_3 = 13589852861268221809ULL;
int var_6 = -1609703129;
unsigned int var_7 = 1025605653U;
unsigned int var_9 = 1677963656U;
short var_10 = (short)-22568;
int zero = 0;
unsigned int var_12 = 2410739218U;
unsigned char var_13 = (unsigned char)80;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
