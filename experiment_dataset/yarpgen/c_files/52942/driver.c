#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8212;
unsigned int var_2 = 1464793966U;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)132;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 2915123154U;
unsigned long long int var_14 = 17826059755573337227ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)63547;
unsigned short var_16 = (unsigned short)10660;
unsigned long long int var_17 = 14250912919109445683ULL;
unsigned short var_18 = (unsigned short)60957;
unsigned long long int var_19 = 9164154605683514636ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
