#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1475511159;
int var_1 = -1010018624;
unsigned char var_2 = (unsigned char)51;
short var_3 = (short)-19035;
unsigned char var_7 = (unsigned char)131;
short var_10 = (short)-3674;
int zero = 0;
short var_13 = (short)-28583;
long long int var_14 = -7784824747397196224LL;
signed char var_15 = (signed char)-101;
short var_16 = (short)-32346;
unsigned char var_17 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
