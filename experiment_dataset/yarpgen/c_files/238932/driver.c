#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)204;
unsigned int var_3 = 879248432U;
long long int var_4 = 7998916790835432311LL;
unsigned int var_6 = 1936669915U;
unsigned long long int var_8 = 3759106767001515382ULL;
unsigned short var_10 = (unsigned short)26762;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3508636601U;
unsigned int var_13 = 2967182127U;
unsigned int var_14 = 1380956992U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
