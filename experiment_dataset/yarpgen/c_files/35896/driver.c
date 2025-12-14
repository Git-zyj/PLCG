#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 359256231U;
int var_1 = -1041392299;
int var_2 = 1838057179;
short var_3 = (short)-1054;
unsigned long long int var_4 = 2181585770707855971ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)23;
int var_7 = 2007363334;
unsigned int var_9 = 3011065004U;
int zero = 0;
unsigned short var_11 = (unsigned short)32831;
unsigned short var_12 = (unsigned short)44803;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
