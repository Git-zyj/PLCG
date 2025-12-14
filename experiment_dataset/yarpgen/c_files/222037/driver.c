#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 971767677U;
short var_3 = (short)-32339;
long long int var_10 = -160723425103628799LL;
unsigned int var_12 = 3740084603U;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)36416;
unsigned long long int var_18 = 6134811165102679004ULL;
signed char var_19 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
