#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3283;
unsigned int var_2 = 3309335708U;
_Bool var_5 = (_Bool)0;
int var_6 = -212576030;
unsigned char var_7 = (unsigned char)8;
int zero = 0;
unsigned char var_17 = (unsigned char)73;
signed char var_18 = (signed char)-55;
unsigned char var_19 = (unsigned char)14;
unsigned int var_20 = 449618056U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
