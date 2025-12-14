#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_5 = 1076617448996726970LL;
unsigned short var_6 = (unsigned short)63421;
unsigned char var_7 = (unsigned char)238;
int zero = 0;
int var_13 = -778440798;
signed char var_14 = (signed char)12;
long long int var_15 = 4466196885552348732LL;
unsigned short var_16 = (unsigned short)11142;
void init() {
}

void checksum() {
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
