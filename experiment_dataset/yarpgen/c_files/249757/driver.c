#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
unsigned short var_3 = (unsigned short)28625;
int var_4 = -1721438535;
short var_5 = (short)-5308;
long long int var_6 = -7463381713356625772LL;
unsigned char var_8 = (unsigned char)230;
short var_10 = (short)-2539;
int var_12 = 475742670;
unsigned int var_13 = 778773718U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)172;
long long int var_17 = -6335455131297881578LL;
int var_18 = -2075435695;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
