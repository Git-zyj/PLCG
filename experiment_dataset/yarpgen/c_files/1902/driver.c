#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
unsigned int var_2 = 1338348479U;
unsigned char var_14 = (unsigned char)81;
unsigned int var_16 = 3459548829U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3933500190U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
