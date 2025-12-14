#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned int var_1 = 3140379942U;
int var_3 = 206994584;
unsigned char var_6 = (unsigned char)143;
short var_10 = (short)8558;
unsigned char var_11 = (unsigned char)252;
int var_13 = 1273187004;
int zero = 0;
unsigned char var_14 = (unsigned char)186;
signed char var_15 = (signed char)86;
unsigned long long int var_16 = 14608799362352854706ULL;
unsigned long long int var_17 = 16490808578618856194ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
