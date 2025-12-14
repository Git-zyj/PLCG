#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)97;
unsigned char var_6 = (unsigned char)232;
unsigned int var_8 = 1773186272U;
unsigned char var_9 = (unsigned char)239;
unsigned int var_10 = 968336187U;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -34417637535473270LL;
long long int var_15 = -7033967599230815665LL;
_Bool var_16 = (_Bool)0;
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
