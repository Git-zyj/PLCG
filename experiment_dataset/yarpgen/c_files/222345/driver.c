#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1268478531;
unsigned char var_4 = (unsigned char)24;
signed char var_5 = (signed char)-86;
int var_7 = -1178507153;
unsigned int var_8 = 750676654U;
signed char var_10 = (signed char)21;
int zero = 0;
unsigned char var_12 = (unsigned char)64;
short var_13 = (short)9131;
short var_14 = (short)7189;
void init() {
}

void checksum() {
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
