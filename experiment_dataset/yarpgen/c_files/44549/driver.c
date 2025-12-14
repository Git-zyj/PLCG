#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -779328938;
unsigned char var_4 = (unsigned char)81;
unsigned int var_5 = 3235638840U;
int zero = 0;
unsigned short var_13 = (unsigned short)49563;
int var_14 = -1725088927;
int var_15 = 2078760111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
