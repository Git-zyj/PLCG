#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)110;
short var_2 = (short)-30066;
signed char var_3 = (signed char)-21;
long long int var_4 = -3556753919881578476LL;
long long int var_5 = 8169049623782004322LL;
long long int var_7 = 1410599823058464842LL;
unsigned long long int var_8 = 15350791557134445597ULL;
unsigned char var_9 = (unsigned char)3;
unsigned short var_11 = (unsigned short)9646;
int zero = 0;
int var_12 = -1858758530;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 17572278698464383452ULL;
unsigned int var_15 = 2625540608U;
short var_16 = (short)30052;
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
