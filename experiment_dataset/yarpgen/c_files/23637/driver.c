#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 6229228015036708968ULL;
long long int var_10 = -2495840928784159547LL;
int var_11 = -1752649710;
signed char var_12 = (signed char)-48;
unsigned long long int var_14 = 10077565241282367408ULL;
signed char var_16 = (signed char)-63;
unsigned long long int var_17 = 7081847863687647259ULL;
short var_18 = (short)-12758;
unsigned long long int var_19 = 454526863633509296ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7497618435171050311LL;
unsigned char var_22 = (unsigned char)227;
long long int var_23 = -7627480029473367590LL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
