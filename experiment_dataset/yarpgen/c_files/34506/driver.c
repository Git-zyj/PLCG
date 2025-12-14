#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_9 = (unsigned char)165;
unsigned short var_11 = (unsigned short)5283;
unsigned long long int var_13 = 2564028650555323994ULL;
unsigned long long int var_14 = 396632043804734714ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)166;
unsigned char var_16 = (unsigned char)86;
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
