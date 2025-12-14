#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)8692;
unsigned int var_7 = 2572831560U;
unsigned short var_13 = (unsigned short)48363;
int var_18 = -1040168248;
int zero = 0;
unsigned char var_19 = (unsigned char)104;
long long int var_20 = -1977621378207591467LL;
unsigned short var_21 = (unsigned short)13357;
unsigned short var_22 = (unsigned short)63123;
unsigned char var_23 = (unsigned char)86;
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
