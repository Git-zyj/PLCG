#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7072;
unsigned char var_4 = (unsigned char)96;
unsigned int var_6 = 2944599520U;
long long int var_10 = 7973463518291729865LL;
signed char var_11 = (signed char)98;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1392400214U;
void init() {
}

void checksum() {
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
