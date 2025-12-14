#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23797;
unsigned short var_2 = (unsigned short)33957;
unsigned char var_4 = (unsigned char)124;
_Bool var_6 = (_Bool)1;
int var_7 = -898013801;
unsigned int var_10 = 3824379574U;
unsigned short var_13 = (unsigned short)51232;
unsigned char var_14 = (unsigned char)73;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)182;
signed char var_17 = (signed char)44;
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
