#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned int var_2 = 2880624375U;
unsigned char var_3 = (unsigned char)78;
unsigned char var_5 = (unsigned char)104;
unsigned int var_6 = 93450579U;
unsigned int var_7 = 21322095U;
unsigned char var_10 = (unsigned char)80;
unsigned char var_15 = (unsigned char)97;
int zero = 0;
unsigned int var_16 = 1305450390U;
unsigned int var_17 = 3651762210U;
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
