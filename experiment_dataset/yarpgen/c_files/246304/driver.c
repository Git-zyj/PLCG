#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30484;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 4268491003U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -1301107866;
unsigned int var_13 = 2645179152U;
unsigned int var_14 = 197652282U;
unsigned char var_15 = (unsigned char)69;
short var_16 = (short)-2699;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
