#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51948;
int var_2 = 1679739721;
unsigned long long int var_3 = 14481129189896025633ULL;
unsigned int var_6 = 3777181326U;
unsigned short var_7 = (unsigned short)21548;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 13154140050994734299ULL;
long long int var_13 = 1067850013033317215LL;
unsigned int var_14 = 3910390600U;
long long int var_15 = 6999907837688627793LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
