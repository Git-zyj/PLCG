#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_16 = 2119286291U;
unsigned int var_17 = 3178062749U;
int zero = 0;
short var_20 = (short)-5137;
signed char var_21 = (signed char)73;
short var_22 = (short)-23101;
signed char var_23 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
