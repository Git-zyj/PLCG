#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -65942023;
signed char var_3 = (signed char)6;
unsigned short var_5 = (unsigned short)46504;
short var_6 = (short)17070;
short var_8 = (short)14903;
short var_12 = (short)1421;
int zero = 0;
signed char var_14 = (signed char)-33;
signed char var_15 = (signed char)-92;
unsigned short var_16 = (unsigned short)32793;
unsigned short var_17 = (unsigned short)45204;
void init() {
}

void checksum() {
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
