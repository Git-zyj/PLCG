#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3046220741U;
unsigned long long int var_3 = 6767714818311609997ULL;
unsigned short var_11 = (unsigned short)19059;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
unsigned short var_15 = (unsigned short)3204;
unsigned int var_16 = 3580269547U;
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
