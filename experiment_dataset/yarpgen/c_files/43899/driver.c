#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-47;
unsigned short var_5 = (unsigned short)11768;
short var_10 = (short)11268;
unsigned char var_14 = (unsigned char)20;
unsigned char var_17 = (unsigned char)42;
unsigned short var_18 = (unsigned short)12597;
int zero = 0;
int var_20 = -1487929471;
unsigned int var_21 = 3876325106U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
