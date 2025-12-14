#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_11 = (signed char)31;
short var_15 = (short)-4622;
unsigned long long int var_16 = 11286736808161803945ULL;
int zero = 0;
unsigned long long int var_18 = 1240953837755491210ULL;
unsigned short var_19 = (unsigned short)1707;
signed char var_20 = (signed char)95;
unsigned char var_21 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
