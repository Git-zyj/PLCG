#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_2 = -1077256501941577482LL;
unsigned short var_3 = (unsigned short)6994;
unsigned int var_6 = 3869293771U;
unsigned short var_8 = (unsigned short)44442;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-70;
unsigned short var_13 = (unsigned short)36231;
unsigned short var_14 = (unsigned short)36990;
int zero = 0;
long long int var_18 = -4831250805159889934LL;
unsigned int var_19 = 2518117818U;
unsigned char var_20 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
