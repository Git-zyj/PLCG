#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13734;
unsigned char var_5 = (unsigned char)140;
signed char var_8 = (signed char)-66;
unsigned short var_14 = (unsigned short)9166;
int zero = 0;
unsigned int var_16 = 1354623902U;
unsigned int var_17 = 392337690U;
int var_18 = 205658858;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
