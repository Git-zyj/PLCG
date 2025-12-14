#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)12;
unsigned int var_4 = 2369715532U;
unsigned short var_5 = (unsigned short)11890;
unsigned char var_6 = (unsigned char)32;
signed char var_7 = (signed char)78;
unsigned short var_8 = (unsigned short)63633;
unsigned int var_12 = 3292868694U;
int var_13 = -419576928;
int zero = 0;
unsigned short var_14 = (unsigned short)38733;
unsigned long long int var_15 = 16716495625056253864ULL;
unsigned long long int var_16 = 16240689947390901397ULL;
void init() {
}

void checksum() {
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
