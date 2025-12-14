#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = 1698430719;
unsigned char var_7 = (unsigned char)118;
int var_8 = 1923498570;
unsigned char var_9 = (unsigned char)92;
long long int var_10 = 3390523651816221299LL;
unsigned int var_11 = 1954502783U;
int var_12 = 2000058398;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)14;
long long int var_16 = -7425911873803472061LL;
unsigned char var_17 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
