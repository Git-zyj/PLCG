#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 855362900U;
_Bool var_4 = (_Bool)1;
short var_10 = (short)25939;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -248953598;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-124;
int var_23 = 101455376;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
