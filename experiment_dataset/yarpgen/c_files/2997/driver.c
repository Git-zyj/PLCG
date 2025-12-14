#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6492383003376744086LL;
unsigned short var_6 = (unsigned short)56255;
short var_7 = (short)12785;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1258012504U;
unsigned int var_13 = 2656733325U;
unsigned long long int var_14 = 18339743901943128972ULL;
unsigned long long int var_16 = 8693395696123127452ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7788832017938437252ULL;
int var_19 = 749773713;
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
