#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)43296;
signed char var_10 = (signed char)-95;
int zero = 0;
short var_11 = (short)-30793;
unsigned short var_12 = (unsigned short)64164;
int var_13 = -1660187923;
int var_14 = 1550545207;
short var_15 = (short)-6023;
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
