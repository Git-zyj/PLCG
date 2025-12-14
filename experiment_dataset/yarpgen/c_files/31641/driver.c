#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)118;
int var_8 = 511365600;
unsigned char var_10 = (unsigned char)26;
unsigned char var_12 = (unsigned char)170;
unsigned char var_13 = (unsigned char)251;
unsigned int var_14 = 4151836754U;
int zero = 0;
unsigned char var_15 = (unsigned char)209;
unsigned char var_16 = (unsigned char)99;
int var_17 = -430091536;
void init() {
}

void checksum() {
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
