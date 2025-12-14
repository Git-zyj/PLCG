#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3603924395U;
signed char var_3 = (signed char)48;
signed char var_5 = (signed char)7;
unsigned short var_6 = (unsigned short)55347;
signed char var_7 = (signed char)74;
int var_8 = 1704698293;
int zero = 0;
long long int var_12 = 5541854826174727107LL;
int var_13 = 335562656;
int var_14 = 904687904;
unsigned char var_15 = (unsigned char)188;
short var_16 = (short)729;
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
