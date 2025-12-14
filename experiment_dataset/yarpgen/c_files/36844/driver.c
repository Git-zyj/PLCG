#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2002985677U;
unsigned short var_6 = (unsigned short)30041;
unsigned short var_10 = (unsigned short)41278;
signed char var_11 = (signed char)116;
int zero = 0;
unsigned int var_20 = 3068845439U;
unsigned int var_21 = 3250089361U;
signed char var_22 = (signed char)-87;
unsigned short var_23 = (unsigned short)49992;
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
