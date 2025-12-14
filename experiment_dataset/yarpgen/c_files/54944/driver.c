#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 426148923;
unsigned long long int var_6 = 12843506405203417937ULL;
signed char var_9 = (signed char)98;
short var_10 = (short)-29024;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)60746;
unsigned short var_17 = (unsigned short)23241;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)48890;
void init() {
}

void checksum() {
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
