#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1983062856U;
unsigned char var_10 = (unsigned char)204;
unsigned int var_12 = 3875461123U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)48240;
unsigned short var_16 = (unsigned short)58603;
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
