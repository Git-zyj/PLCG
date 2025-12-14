#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)59131;
unsigned int var_4 = 3087499273U;
short var_7 = (short)-22566;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -253913292550061617LL;
int var_12 = -783305551;
signed char var_13 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
