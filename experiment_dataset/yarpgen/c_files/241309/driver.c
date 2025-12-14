#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22324;
unsigned short var_2 = (unsigned short)9679;
signed char var_3 = (signed char)-56;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17048981883380388969ULL;
unsigned int var_6 = 1729558459U;
unsigned long long int var_8 = 8440690954419611703ULL;
short var_9 = (short)-16560;
short var_10 = (short)22607;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-29012;
int var_13 = 875115196;
unsigned int var_14 = 2084870629U;
long long int var_15 = -5826780697013256385LL;
unsigned long long int var_16 = 11235850102083766006ULL;
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
