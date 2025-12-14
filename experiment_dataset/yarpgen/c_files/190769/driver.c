#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8227;
unsigned char var_3 = (unsigned char)72;
unsigned char var_5 = (unsigned char)0;
signed char var_8 = (signed char)20;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)207;
unsigned int var_13 = 1860750391U;
int var_14 = 945105185;
unsigned long long int var_17 = 4070555324331716209ULL;
int zero = 0;
unsigned long long int var_19 = 14676605310788026903ULL;
unsigned short var_20 = (unsigned short)6053;
unsigned char var_21 = (unsigned char)2;
signed char var_22 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
