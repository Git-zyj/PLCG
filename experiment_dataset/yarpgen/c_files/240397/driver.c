#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1622121877;
unsigned long long int var_5 = 11768086617190770025ULL;
unsigned char var_14 = (unsigned char)164;
int zero = 0;
unsigned long long int var_15 = 12737694741092807146ULL;
signed char var_16 = (signed char)92;
void init() {
}

void checksum() {
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
