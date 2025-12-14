#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2134734549U;
unsigned char var_7 = (unsigned char)252;
unsigned short var_12 = (unsigned short)60047;
short var_16 = (short)-10314;
int zero = 0;
unsigned char var_17 = (unsigned char)15;
signed char var_18 = (signed char)4;
signed char var_19 = (signed char)49;
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
