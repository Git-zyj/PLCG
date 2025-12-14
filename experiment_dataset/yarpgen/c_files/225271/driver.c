#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 114660786;
int var_6 = 1513275861;
unsigned int var_14 = 328931699U;
int zero = 0;
signed char var_15 = (signed char)71;
_Bool var_16 = (_Bool)0;
int var_17 = -491885540;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
