#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2222848044U;
unsigned int var_3 = 286134133U;
unsigned char var_5 = (unsigned char)149;
unsigned long long int var_6 = 17033807750206119822ULL;
unsigned int var_7 = 2463685826U;
short var_8 = (short)21844;
long long int var_10 = -3176898991989886311LL;
unsigned short var_12 = (unsigned short)11744;
unsigned int var_13 = 1980679550U;
int zero = 0;
unsigned long long int var_14 = 4191709838845225400ULL;
unsigned int var_15 = 39364264U;
unsigned char var_16 = (unsigned char)141;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
