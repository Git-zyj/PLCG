#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-88;
int var_9 = -1578452814;
int var_11 = -1997321454;
unsigned char var_12 = (unsigned char)12;
short var_13 = (short)-6209;
unsigned short var_15 = (unsigned short)29912;
int zero = 0;
int var_16 = -37995913;
unsigned int var_17 = 657237375U;
signed char var_18 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
