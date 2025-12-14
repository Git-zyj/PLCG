#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -862504891;
long long int var_2 = -2797176892936368390LL;
unsigned int var_3 = 3188952366U;
unsigned short var_12 = (unsigned short)14241;
int zero = 0;
unsigned int var_13 = 1737113527U;
int var_14 = -7336914;
unsigned char var_15 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
