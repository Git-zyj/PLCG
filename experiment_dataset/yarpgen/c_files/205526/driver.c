#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11219;
unsigned int var_1 = 3022366582U;
unsigned char var_9 = (unsigned char)228;
signed char var_13 = (signed char)-59;
signed char var_14 = (signed char)-7;
int var_15 = -700771495;
unsigned int var_16 = 3168962865U;
int zero = 0;
unsigned short var_17 = (unsigned short)42258;
int var_18 = -127573518;
int var_19 = -1556395975;
void init() {
}

void checksum() {
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
