#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 166118603U;
unsigned char var_4 = (unsigned char)2;
unsigned char var_6 = (unsigned char)60;
unsigned int var_11 = 268527488U;
int var_13 = -1718493705;
int var_16 = 1825956241;
int zero = 0;
int var_17 = 1655979627;
unsigned long long int var_18 = 13853738341670817395ULL;
_Bool var_19 = (_Bool)0;
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
