#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14146;
int var_10 = 1012520559;
unsigned char var_14 = (unsigned char)71;
unsigned int var_15 = 2053820523U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 3386278675U;
unsigned char var_21 = (unsigned char)242;
int var_22 = 1264995525;
unsigned short var_23 = (unsigned short)7311;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
