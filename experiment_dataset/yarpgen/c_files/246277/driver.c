#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9248723392974492123ULL;
unsigned short var_3 = (unsigned short)48304;
signed char var_14 = (signed char)-38;
unsigned char var_15 = (unsigned char)205;
short var_16 = (short)-7487;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)73;
int var_19 = 647679247;
int var_20 = -1116515210;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
