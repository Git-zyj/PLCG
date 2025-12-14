#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3263;
unsigned short var_3 = (unsigned short)1883;
signed char var_4 = (signed char)-84;
unsigned short var_5 = (unsigned short)30183;
signed char var_7 = (signed char)97;
int var_8 = 751767102;
signed char var_9 = (signed char)87;
signed char var_10 = (signed char)90;
int zero = 0;
int var_11 = 54225689;
unsigned short var_12 = (unsigned short)58045;
unsigned short var_13 = (unsigned short)31897;
signed char var_14 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
