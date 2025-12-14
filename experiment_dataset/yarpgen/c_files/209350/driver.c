#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-81;
unsigned char var_3 = (unsigned char)234;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)104;
long long int var_10 = 1667932511691095642LL;
int zero = 0;
long long int var_16 = -5988976243880843746LL;
unsigned char var_17 = (unsigned char)12;
void init() {
}

void checksum() {
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
