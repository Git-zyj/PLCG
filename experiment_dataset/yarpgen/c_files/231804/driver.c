#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48324;
unsigned short var_1 = (unsigned short)42039;
_Bool var_2 = (_Bool)1;
short var_3 = (short)30215;
short var_4 = (short)3949;
unsigned short var_5 = (unsigned short)56249;
unsigned short var_6 = (unsigned short)63302;
unsigned short var_7 = (unsigned short)18091;
short var_8 = (short)-12883;
short var_11 = (short)-618;
unsigned short var_12 = (unsigned short)62663;
int zero = 0;
unsigned short var_14 = (unsigned short)65227;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
