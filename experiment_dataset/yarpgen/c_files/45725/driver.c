#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)91;
unsigned int var_2 = 2710100458U;
signed char var_7 = (signed char)-92;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
int var_18 = 1133373653;
signed char var_19 = (signed char)33;
void init() {
}

void checksum() {
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
