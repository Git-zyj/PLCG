#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2956;
signed char var_3 = (signed char)-78;
unsigned char var_4 = (unsigned char)227;
unsigned long long int var_7 = 6977533013790467152ULL;
short var_10 = (short)15328;
int zero = 0;
short var_11 = (short)21622;
signed char var_12 = (signed char)27;
unsigned int var_13 = 3523796582U;
unsigned short var_14 = (unsigned short)63853;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
