#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned int var_2 = 1232827379U;
unsigned int var_6 = 1251648016U;
int var_7 = 454973294;
int var_8 = 1895783543;
signed char var_13 = (signed char)-80;
int zero = 0;
unsigned char var_14 = (unsigned char)224;
signed char var_15 = (signed char)-122;
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
