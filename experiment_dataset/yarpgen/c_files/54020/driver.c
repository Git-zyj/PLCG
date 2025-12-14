#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2815;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)2662;
long long int var_8 = -5518184243642399120LL;
unsigned int var_10 = 973302986U;
unsigned long long int var_11 = 11375837856783895983ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)58;
long long int var_13 = -5403849125749416847LL;
_Bool var_14 = (_Bool)0;
int var_15 = -972094751;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
