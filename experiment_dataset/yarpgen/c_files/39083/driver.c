#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 14815310877989230432ULL;
long long int var_4 = 1865329642613664153LL;
signed char var_8 = (signed char)1;
signed char var_10 = (signed char)16;
int zero = 0;
int var_11 = 392315450;
unsigned char var_12 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
