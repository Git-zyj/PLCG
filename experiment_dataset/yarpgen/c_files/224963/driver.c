#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)86;
unsigned int var_3 = 1840118467U;
_Bool var_4 = (_Bool)1;
int var_6 = 336186404;
signed char var_7 = (signed char)-124;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)4888;
_Bool var_10 = (_Bool)1;
int var_11 = 1685213511;
int var_12 = 1129948867;
unsigned int var_13 = 185265061U;
int var_14 = 284559227;
signed char var_16 = (signed char)-9;
unsigned short var_17 = (unsigned short)17533;
int var_18 = -394868393;
signed char var_19 = (signed char)-87;
int zero = 0;
int var_20 = -1990774986;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2618693052U;
signed char var_23 = (signed char)-124;
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
