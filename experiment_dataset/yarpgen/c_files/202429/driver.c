#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1993859702;
short var_3 = (short)-11251;
_Bool var_4 = (_Bool)1;
int var_5 = -956962074;
unsigned short var_7 = (unsigned short)27170;
long long int var_8 = 6930219200085763212LL;
_Bool var_9 = (_Bool)0;
unsigned int var_17 = 1685636789U;
int var_18 = -262064827;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)51;
unsigned char var_21 = (unsigned char)100;
long long int var_22 = -3768416490652392701LL;
long long int var_23 = 4259550787926229571LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
