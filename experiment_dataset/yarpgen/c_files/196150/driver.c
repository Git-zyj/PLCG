#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3664811773U;
int var_5 = 1862127482;
signed char var_7 = (signed char)117;
unsigned char var_8 = (unsigned char)15;
unsigned int var_10 = 1367090416U;
int zero = 0;
unsigned char var_11 = (unsigned char)72;
unsigned short var_12 = (unsigned short)828;
unsigned char var_13 = (unsigned char)125;
signed char var_14 = (signed char)17;
long long int var_15 = 3071729437593180731LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
