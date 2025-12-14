#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 833195299;
unsigned int var_4 = 693354051U;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-15796;
short var_9 = (short)16990;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_12 = 2138727890;
int zero = 0;
int var_13 = 1266345314;
unsigned char var_14 = (unsigned char)157;
signed char var_15 = (signed char)56;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
