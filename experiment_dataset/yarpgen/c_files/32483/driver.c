#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2060292401;
unsigned long long int var_1 = 1466203490872365896ULL;
unsigned int var_6 = 944031280U;
unsigned short var_7 = (unsigned short)29840;
unsigned long long int var_8 = 14443481763404846804ULL;
unsigned int var_9 = 1349407005U;
int var_11 = -413381740;
int zero = 0;
unsigned long long int var_13 = 2889380702442744166ULL;
unsigned int var_14 = 1470296538U;
short var_15 = (short)12701;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)2136;
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
