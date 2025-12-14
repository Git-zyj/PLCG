#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)44;
signed char var_11 = (signed char)-5;
unsigned long long int var_12 = 2759051871915232274ULL;
unsigned char var_14 = (unsigned char)54;
int zero = 0;
unsigned char var_18 = (unsigned char)207;
unsigned int var_19 = 3143410013U;
int var_20 = -821709718;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
