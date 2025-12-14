#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37929;
unsigned short var_3 = (unsigned short)28474;
int var_7 = -1818129504;
int var_10 = -1285995628;
int zero = 0;
int var_12 = -1811073184;
int var_13 = 350826554;
signed char var_14 = (signed char)-122;
unsigned char var_15 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
