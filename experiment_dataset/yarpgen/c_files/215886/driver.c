#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned char var_8 = (unsigned char)99;
int var_15 = 914163137;
int zero = 0;
unsigned int var_20 = 3388121649U;
unsigned char var_21 = (unsigned char)126;
unsigned char var_22 = (unsigned char)73;
unsigned int var_23 = 964432065U;
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
