#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62188;
unsigned long long int var_3 = 17559055254333377636ULL;
short var_8 = (short)10716;
int zero = 0;
unsigned short var_11 = (unsigned short)2992;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)55632;
unsigned short var_14 = (unsigned short)29156;
unsigned long long int var_15 = 8259976288331451966ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
