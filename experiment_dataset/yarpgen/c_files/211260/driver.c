#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 973185289U;
unsigned short var_6 = (unsigned short)14009;
unsigned short var_10 = (unsigned short)1775;
long long int var_11 = -3194252019382342625LL;
int zero = 0;
unsigned int var_15 = 1397605708U;
unsigned int var_16 = 2087610675U;
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
