#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7287978922346019567LL;
unsigned int var_4 = 3174085810U;
long long int var_6 = -938225405348280470LL;
long long int var_7 = 4352688085360884827LL;
unsigned char var_8 = (unsigned char)187;
unsigned int var_12 = 2908959401U;
int zero = 0;
signed char var_15 = (signed char)117;
long long int var_16 = -2733057269235748400LL;
signed char var_17 = (signed char)-83;
unsigned int var_18 = 1886286971U;
unsigned int var_19 = 104937685U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
