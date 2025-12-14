#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned int var_5 = 771243365U;
unsigned int var_16 = 1760512573U;
unsigned int var_17 = 2609897689U;
int zero = 0;
unsigned short var_19 = (unsigned short)33854;
unsigned int var_20 = 724384162U;
unsigned int var_21 = 2992612746U;
unsigned long long int var_22 = 3531636180831496723ULL;
signed char var_23 = (signed char)91;
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
