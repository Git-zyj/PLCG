#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43123;
short var_2 = (short)-32328;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)124;
long long int var_10 = 2533568079037141283LL;
unsigned int var_11 = 1018653892U;
int zero = 0;
unsigned int var_14 = 1416254197U;
int var_15 = 369669720;
void init() {
}

void checksum() {
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
