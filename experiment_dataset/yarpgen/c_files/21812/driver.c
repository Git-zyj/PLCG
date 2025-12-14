#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)18053;
long long int var_6 = -3349730864401322465LL;
unsigned int var_10 = 715966555U;
unsigned short var_11 = (unsigned short)28402;
int zero = 0;
long long int var_12 = 3832331710823867640LL;
unsigned long long int var_13 = 12020066492393790646ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)61014;
unsigned long long int var_16 = 5992330586184920145ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
