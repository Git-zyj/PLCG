#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3582661381945513069LL;
unsigned int var_5 = 4243804179U;
unsigned long long int var_7 = 247888370521942462ULL;
short var_9 = (short)32399;
unsigned short var_11 = (unsigned short)43734;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-32495;
unsigned char var_16 = (unsigned char)205;
int zero = 0;
unsigned int var_18 = 3550234902U;
unsigned long long int var_19 = 17511692974845954077ULL;
short var_20 = (short)-18379;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
