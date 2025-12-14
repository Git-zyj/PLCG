#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1368582658U;
long long int var_2 = -2183355616761629721LL;
unsigned short var_4 = (unsigned short)39706;
long long int var_5 = 62327750323761503LL;
signed char var_6 = (signed char)99;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 5286078124144951694ULL;
short var_12 = (short)-7234;
unsigned short var_13 = (unsigned short)18543;
short var_14 = (short)29242;
int var_15 = -1067283211;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
