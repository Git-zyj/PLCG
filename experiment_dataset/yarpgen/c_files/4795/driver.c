#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29205;
unsigned int var_4 = 1736867185U;
long long int var_6 = 2014697500309884250LL;
int var_7 = -623198000;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2061274339408878117LL;
unsigned long long int var_14 = 10772362318413852686ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)46900;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
