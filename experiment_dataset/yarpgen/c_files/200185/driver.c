#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)113;
_Bool var_11 = (_Bool)0;
short var_15 = (short)20329;
signed char var_16 = (signed char)123;
short var_17 = (short)-11110;
unsigned char var_18 = (unsigned char)243;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
