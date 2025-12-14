#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)177;
signed char var_3 = (signed char)70;
unsigned char var_7 = (unsigned char)221;
unsigned short var_8 = (unsigned short)60805;
int zero = 0;
signed char var_14 = (signed char)92;
int var_15 = 339151899;
int var_16 = 715828886;
unsigned char var_17 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
