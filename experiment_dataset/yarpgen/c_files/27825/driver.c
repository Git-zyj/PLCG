#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 4958509554194882196ULL;
unsigned short var_11 = (unsigned short)51815;
int zero = 0;
unsigned long long int var_12 = 13343462561633103047ULL;
unsigned short var_13 = (unsigned short)53210;
_Bool var_14 = (_Bool)1;
int var_15 = 1870298228;
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
