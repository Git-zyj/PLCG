#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23081;
unsigned int var_1 = 1781111990U;
long long int var_2 = -644572210633058667LL;
_Bool var_4 = (_Bool)1;
int var_6 = -183231102;
unsigned short var_10 = (unsigned short)54955;
int var_12 = 1056608762;
int zero = 0;
unsigned int var_13 = 1617161049U;
unsigned int var_14 = 22185379U;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)234;
short var_17 = (short)-23096;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
