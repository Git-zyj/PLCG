#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 370494266U;
unsigned short var_2 = (unsigned short)42247;
long long int var_5 = 3836311388930164253LL;
unsigned char var_8 = (unsigned char)29;
unsigned int var_10 = 3300819168U;
int zero = 0;
signed char var_12 = (signed char)-41;
unsigned long long int var_13 = 6079886565278228097ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
