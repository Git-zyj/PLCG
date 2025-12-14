#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 23645344U;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2720389043U;
unsigned char var_7 = (unsigned char)173;
signed char var_10 = (signed char)-4;
int zero = 0;
short var_12 = (short)29739;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
