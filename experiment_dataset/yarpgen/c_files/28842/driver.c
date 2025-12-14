#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 625460456U;
unsigned char var_3 = (unsigned char)90;
long long int var_4 = -6367812673616466425LL;
unsigned short var_5 = (unsigned short)18300;
int zero = 0;
unsigned short var_10 = (unsigned short)20900;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3948984010764868634LL;
unsigned short var_13 = (unsigned short)15123;
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
