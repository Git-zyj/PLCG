#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51843;
unsigned int var_5 = 2619056062U;
unsigned char var_8 = (unsigned char)14;
int var_12 = -777167211;
unsigned short var_14 = (unsigned short)62990;
int zero = 0;
short var_16 = (short)12877;
unsigned int var_17 = 880252265U;
unsigned short var_18 = (unsigned short)3337;
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
