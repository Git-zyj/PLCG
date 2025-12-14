#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 788369428;
unsigned long long int var_4 = 14774090326545639255ULL;
unsigned int var_5 = 2995744999U;
int var_7 = -1587557356;
unsigned short var_9 = (unsigned short)59550;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -297832570;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3284946731U;
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
