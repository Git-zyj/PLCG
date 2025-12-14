#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5491393003239636315LL;
long long int var_3 = -1681295160075590943LL;
int var_7 = 588500997;
_Bool var_8 = (_Bool)0;
long long int var_9 = 9039978874514791172LL;
long long int var_11 = 4413060033991699654LL;
int zero = 0;
unsigned long long int var_12 = 13285088034112966249ULL;
unsigned short var_13 = (unsigned short)43561;
long long int var_14 = -3393458400097065841LL;
unsigned char var_15 = (unsigned char)251;
int var_16 = -1100630748;
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
