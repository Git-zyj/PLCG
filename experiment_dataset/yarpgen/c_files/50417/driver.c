#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)29734;
unsigned short var_11 = (unsigned short)63001;
unsigned short var_12 = (unsigned short)55400;
unsigned char var_13 = (unsigned char)178;
long long int var_15 = -7147051362366621928LL;
unsigned int var_16 = 7378295U;
int zero = 0;
unsigned int var_20 = 2475509496U;
signed char var_21 = (signed char)-59;
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
