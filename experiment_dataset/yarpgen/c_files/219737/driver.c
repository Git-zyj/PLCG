#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
unsigned int var_2 = 906687017U;
unsigned char var_7 = (unsigned char)71;
unsigned long long int var_9 = 10481356916207495186ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_14 = -713615;
unsigned short var_15 = (unsigned short)1420;
void init() {
}

void checksum() {
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
