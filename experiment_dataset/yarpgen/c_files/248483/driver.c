#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2713726433778969155LL;
unsigned int var_4 = 3259666746U;
unsigned int var_5 = 740304012U;
unsigned short var_8 = (unsigned short)17797;
int zero = 0;
int var_19 = 1973611747;
unsigned int var_20 = 328531484U;
unsigned int var_21 = 2561835334U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
