#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_13 = 7654593654556822849LL;
unsigned short var_14 = (unsigned short)21538;
unsigned char var_15 = (unsigned char)159;
long long int var_17 = -4566656456193393955LL;
int zero = 0;
long long int var_18 = 561660231205249167LL;
unsigned char var_19 = (unsigned char)146;
long long int var_20 = -3278322490706410776LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
