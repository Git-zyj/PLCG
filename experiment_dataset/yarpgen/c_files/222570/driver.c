#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11947729300145983856ULL;
unsigned int var_1 = 1770333821U;
signed char var_2 = (signed char)63;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)12768;
short var_11 = (short)6752;
unsigned short var_12 = (unsigned short)7576;
int zero = 0;
unsigned long long int var_13 = 13802138988926686005ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
