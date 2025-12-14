#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23223;
long long int var_3 = -8380328170828930058LL;
unsigned int var_5 = 2360677568U;
long long int var_7 = 2365295624833720289LL;
long long int var_8 = 8325324745474203744LL;
int zero = 0;
unsigned short var_11 = (unsigned short)6627;
unsigned char var_12 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
