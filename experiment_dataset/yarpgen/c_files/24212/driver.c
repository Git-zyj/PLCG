#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)24581;
unsigned char var_4 = (unsigned char)128;
unsigned int var_6 = 522683776U;
short var_7 = (short)-30631;
unsigned short var_8 = (unsigned short)6607;
unsigned short var_9 = (unsigned short)23934;
int zero = 0;
unsigned int var_10 = 3091858718U;
unsigned char var_11 = (unsigned char)212;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
