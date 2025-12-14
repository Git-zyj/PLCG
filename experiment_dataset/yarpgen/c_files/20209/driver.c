#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6289;
short var_8 = (short)12872;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-17;
int var_15 = -819236428;
int var_16 = 515560501;
int zero = 0;
short var_17 = (short)-31791;
unsigned short var_18 = (unsigned short)7616;
int var_19 = -562239375;
signed char var_20 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
