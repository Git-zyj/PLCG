#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-20334;
signed char var_10 = (signed char)65;
unsigned char var_13 = (unsigned char)17;
int var_15 = -499360144;
int zero = 0;
long long int var_17 = -14975519343716027LL;
unsigned int var_18 = 2010254607U;
signed char var_19 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
