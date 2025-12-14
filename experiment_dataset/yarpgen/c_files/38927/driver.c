#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15283515514899586084ULL;
unsigned short var_6 = (unsigned short)48808;
long long int var_10 = -2995086025556659498LL;
unsigned int var_12 = 1640492229U;
int zero = 0;
signed char var_19 = (signed char)-79;
signed char var_20 = (signed char)-88;
unsigned long long int var_21 = 16455212111901146542ULL;
unsigned char var_22 = (unsigned char)218;
long long int var_23 = -1053177155419354589LL;
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
