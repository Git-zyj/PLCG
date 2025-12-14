#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2481;
short var_3 = (short)18519;
short var_11 = (short)-32304;
signed char var_12 = (signed char)44;
short var_13 = (short)-27882;
unsigned short var_15 = (unsigned short)4678;
int zero = 0;
unsigned short var_19 = (unsigned short)49605;
unsigned short var_20 = (unsigned short)41907;
unsigned int var_21 = 2159986663U;
int var_22 = 765043370;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
