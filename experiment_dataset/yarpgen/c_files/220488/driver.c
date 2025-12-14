#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)59;
unsigned char var_3 = (unsigned char)204;
long long int var_4 = -7615182797436756274LL;
unsigned char var_6 = (unsigned char)110;
unsigned char var_10 = (unsigned char)90;
unsigned char var_11 = (unsigned char)14;
signed char var_12 = (signed char)-48;
unsigned char var_14 = (unsigned char)102;
unsigned char var_15 = (unsigned char)56;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6513849164835942476LL;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)95;
unsigned short var_21 = (unsigned short)23029;
int var_22 = 1728760168;
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
