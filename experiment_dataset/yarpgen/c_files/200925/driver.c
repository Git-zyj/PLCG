#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4892470083590519739ULL;
unsigned char var_7 = (unsigned char)92;
short var_9 = (short)28718;
short var_11 = (short)-12216;
unsigned short var_12 = (unsigned short)22651;
_Bool var_13 = (_Bool)0;
short var_14 = (short)2530;
int zero = 0;
short var_16 = (short)686;
unsigned char var_17 = (unsigned char)211;
void init() {
}

void checksum() {
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
