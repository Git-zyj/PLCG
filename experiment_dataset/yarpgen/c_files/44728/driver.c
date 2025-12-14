#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-24037;
long long int var_13 = 5269712222981804806LL;
signed char var_16 = (signed char)65;
int var_19 = -503397530;
int zero = 0;
unsigned short var_20 = (unsigned short)53792;
long long int var_21 = -4369960975825313808LL;
unsigned int var_22 = 2584139983U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
