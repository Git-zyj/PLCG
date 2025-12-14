#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)33;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 1030031610U;
int zero = 0;
unsigned short var_12 = (unsigned short)740;
unsigned short var_13 = (unsigned short)41628;
short var_14 = (short)-6080;
unsigned char var_15 = (unsigned char)131;
unsigned char var_16 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
