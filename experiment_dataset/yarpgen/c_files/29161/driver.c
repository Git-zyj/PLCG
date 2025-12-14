#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1633562628;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)88;
int var_5 = 1408627440;
short var_6 = (short)14720;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 6315919582842036672ULL;
unsigned char var_14 = (unsigned char)35;
_Bool var_16 = (_Bool)1;
int var_17 = 1826097673;
_Bool var_18 = (_Bool)0;
int var_19 = 760949623;
int zero = 0;
signed char var_20 = (signed char)-11;
unsigned char var_21 = (unsigned char)42;
short var_22 = (short)3488;
short var_23 = (short)22397;
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
