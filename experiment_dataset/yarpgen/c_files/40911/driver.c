#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)130;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)55644;
unsigned short var_13 = (unsigned short)28312;
int zero = 0;
unsigned short var_15 = (unsigned short)43510;
unsigned char var_16 = (unsigned char)243;
short var_17 = (short)1416;
void init() {
}

void checksum() {
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
