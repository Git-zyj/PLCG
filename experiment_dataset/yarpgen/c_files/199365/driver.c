#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5537;
_Bool var_2 = (_Bool)0;
int var_3 = 431074630;
unsigned char var_4 = (unsigned char)12;
unsigned short var_8 = (unsigned short)42950;
unsigned long long int var_9 = 2553535306359814903ULL;
unsigned long long int var_10 = 5518937856750104237ULL;
int var_14 = 1801652553;
signed char var_15 = (signed char)-33;
unsigned int var_17 = 506107929U;
unsigned char var_18 = (unsigned char)112;
int zero = 0;
int var_20 = 763824030;
unsigned short var_21 = (unsigned short)63373;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2064814794U;
long long int var_24 = -1657045187852499991LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
