#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1352;
unsigned short var_6 = (unsigned short)45214;
unsigned short var_11 = (unsigned short)49113;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 4089794110U;
int zero = 0;
unsigned short var_18 = (unsigned short)10283;
unsigned long long int var_19 = 554415054055140747ULL;
unsigned short var_20 = (unsigned short)43291;
unsigned short var_21 = (unsigned short)55927;
unsigned short var_22 = (unsigned short)1347;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
