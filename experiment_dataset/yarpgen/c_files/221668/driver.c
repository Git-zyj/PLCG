#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)75;
unsigned int var_8 = 1247601788U;
unsigned long long int var_15 = 9263109354082045346ULL;
int zero = 0;
unsigned int var_16 = 2644561856U;
unsigned int var_17 = 935394681U;
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
