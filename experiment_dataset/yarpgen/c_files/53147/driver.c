#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5989;
int var_4 = -530401756;
unsigned int var_5 = 1811188747U;
unsigned short var_6 = (unsigned short)43151;
long long int var_7 = -1244474919009913001LL;
unsigned int var_12 = 1442755277U;
int zero = 0;
unsigned short var_13 = (unsigned short)24132;
signed char var_14 = (signed char)51;
void init() {
}

void checksum() {
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
