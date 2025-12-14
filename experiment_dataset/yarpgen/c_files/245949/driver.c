#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned long long int var_3 = 5497551721886773174ULL;
signed char var_6 = (signed char)-67;
unsigned int var_10 = 4288137418U;
short var_11 = (short)-2327;
int zero = 0;
int var_13 = 15592499;
unsigned long long int var_14 = 6258047867542441357ULL;
long long int var_15 = 85431693858287502LL;
unsigned char var_16 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
