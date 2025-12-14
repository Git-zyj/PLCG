#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)36;
unsigned char var_6 = (unsigned char)118;
unsigned short var_7 = (unsigned short)34423;
unsigned char var_9 = (unsigned char)53;
unsigned char var_12 = (unsigned char)250;
int zero = 0;
unsigned char var_14 = (unsigned char)109;
unsigned char var_15 = (unsigned char)2;
short var_16 = (short)12224;
short var_17 = (short)18467;
void init() {
}

void checksum() {
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
