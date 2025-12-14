#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)240;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)35;
unsigned short var_11 = (unsigned short)59334;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)24206;
unsigned char var_15 = (unsigned char)70;
short var_16 = (short)-28665;
int var_17 = 1182877474;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
