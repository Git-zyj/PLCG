#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 1362614701947065197LL;
unsigned short var_5 = (unsigned short)6282;
unsigned char var_7 = (unsigned char)54;
signed char var_8 = (signed char)-81;
unsigned long long int var_10 = 10491080412367978245ULL;
unsigned long long int var_11 = 15903224889741306948ULL;
unsigned long long int var_12 = 763325925523871270ULL;
long long int var_17 = 5428255761913198334LL;
int zero = 0;
unsigned short var_20 = (unsigned short)8876;
long long int var_21 = 7132830497767259459LL;
unsigned int var_22 = 3436711185U;
short var_23 = (short)6455;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
