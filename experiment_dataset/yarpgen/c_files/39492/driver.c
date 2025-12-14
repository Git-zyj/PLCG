#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_8 = (short)-23544;
long long int var_9 = -2629556351253599646LL;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)82;
int zero = 0;
unsigned short var_15 = (unsigned short)30545;
unsigned int var_16 = 267316827U;
signed char var_17 = (signed char)42;
void init() {
}

void checksum() {
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
