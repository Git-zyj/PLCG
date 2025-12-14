#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = 2133637028;
unsigned int var_5 = 574552543U;
signed char var_8 = (signed char)90;
unsigned int var_10 = 2595309693U;
int zero = 0;
long long int var_11 = 2267857251281216383LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)61087;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
