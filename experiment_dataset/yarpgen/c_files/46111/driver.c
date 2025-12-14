#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 37343448U;
int var_10 = -1826693054;
unsigned int var_11 = 1762746911U;
short var_13 = (short)-27444;
_Bool var_14 = (_Bool)1;
signed char var_18 = (signed char)-121;
int zero = 0;
unsigned short var_20 = (unsigned short)38858;
short var_21 = (short)7783;
int var_22 = 473912249;
unsigned int var_23 = 3677123130U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
