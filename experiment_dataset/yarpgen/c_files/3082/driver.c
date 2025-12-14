#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)3182;
unsigned char var_5 = (unsigned char)0;
short var_6 = (short)-13414;
short var_7 = (short)-16098;
short var_12 = (short)30212;
unsigned long long int var_13 = 384386651339461723ULL;
unsigned long long int var_15 = 506547406636227702ULL;
long long int var_17 = 7875662327459522438LL;
int zero = 0;
unsigned long long int var_18 = 7733453371657444587ULL;
unsigned int var_19 = 739657908U;
long long int var_20 = -6119814274594255791LL;
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
