#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)4;
short var_3 = (short)-7380;
unsigned int var_6 = 724715823U;
long long int var_7 = 6579508891496480716LL;
unsigned int var_8 = 677143696U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_11 = -986630861;
signed char var_12 = (signed char)-42;
long long int var_13 = 8793903977492814747LL;
_Bool var_14 = (_Bool)0;
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
