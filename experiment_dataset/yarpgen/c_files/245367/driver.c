#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 251089310;
unsigned int var_3 = 1157203634U;
int var_4 = 1771185515;
unsigned int var_12 = 1561223418U;
int zero = 0;
short var_18 = (short)9077;
short var_19 = (short)-16114;
unsigned int var_20 = 2141778009U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
