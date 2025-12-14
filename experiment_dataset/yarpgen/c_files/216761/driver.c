#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6471799123574005608ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_13 = (unsigned short)55871;
unsigned char var_14 = (unsigned char)60;
int zero = 0;
signed char var_15 = (signed char)-99;
unsigned long long int var_16 = 10896359302188392796ULL;
long long int var_17 = 4842828564316680807LL;
short var_18 = (short)-30401;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
