#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30939;
unsigned long long int var_2 = 14772600504781405788ULL;
unsigned short var_3 = (unsigned short)29861;
unsigned char var_4 = (unsigned char)71;
_Bool var_5 = (_Bool)0;
long long int var_6 = 5159417384234219920LL;
unsigned char var_8 = (unsigned char)220;
int zero = 0;
unsigned short var_11 = (unsigned short)52668;
int var_12 = -115714586;
unsigned char var_13 = (unsigned char)189;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)27365;
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
