#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2657525329U;
unsigned char var_3 = (unsigned char)92;
signed char var_9 = (signed char)97;
unsigned int var_10 = 670305048U;
unsigned short var_15 = (unsigned short)11891;
int zero = 0;
unsigned short var_16 = (unsigned short)14071;
unsigned int var_17 = 2817768410U;
void init() {
}

void checksum() {
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
