#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)30700;
unsigned short var_4 = (unsigned short)10950;
long long int var_6 = 5952130187801635512LL;
unsigned long long int var_8 = 12165377520846228998ULL;
long long int var_11 = 1845627260994826517LL;
unsigned long long int var_13 = 694755395100173659ULL;
unsigned long long int var_14 = 4252366129848856707ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)143;
int var_18 = -1670993917;
unsigned int var_19 = 3501764147U;
unsigned long long int var_20 = 16571463333961715000ULL;
unsigned long long int var_21 = 12932604033803773084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
