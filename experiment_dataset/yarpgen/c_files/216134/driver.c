#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64837;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)107;
long long int var_8 = 970289922539159482LL;
unsigned short var_11 = (unsigned short)18041;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3785304022U;
unsigned short var_14 = (unsigned short)30495;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
