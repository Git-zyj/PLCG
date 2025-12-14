#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1835371145;
unsigned int var_7 = 1989238044U;
unsigned int var_8 = 3719185102U;
int zero = 0;
unsigned int var_16 = 1060171142U;
long long int var_17 = -3100130508731440343LL;
void init() {
}

void checksum() {
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
