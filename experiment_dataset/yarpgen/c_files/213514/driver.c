#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-33;
unsigned char var_6 = (unsigned char)51;
unsigned char var_7 = (unsigned char)60;
unsigned int var_10 = 1945450505U;
int zero = 0;
short var_14 = (short)-20535;
unsigned char var_15 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
