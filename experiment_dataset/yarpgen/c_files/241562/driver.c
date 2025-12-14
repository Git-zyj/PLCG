#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)55;
unsigned int var_8 = 3800030414U;
short var_11 = (short)-19493;
unsigned short var_12 = (unsigned short)8794;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-17475;
unsigned int var_15 = 240344542U;
long long int var_16 = -8699162815783824210LL;
unsigned char var_17 = (unsigned char)178;
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
