#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_6 = (short)-27128;
int zero = 0;
unsigned int var_15 = 2720778479U;
short var_16 = (short)-17413;
unsigned char var_17 = (unsigned char)73;
unsigned char var_18 = (unsigned char)112;
unsigned int var_19 = 1117296057U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
