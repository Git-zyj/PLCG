#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-106;
long long int var_6 = -7965442521768541871LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)7;
unsigned short var_13 = (unsigned short)48347;
unsigned long long int var_14 = 12657534860882073805ULL;
unsigned long long int var_15 = 3887420993427748825ULL;
int zero = 0;
int var_20 = -2011639562;
signed char var_21 = (signed char)2;
signed char var_22 = (signed char)-48;
unsigned short var_23 = (unsigned short)51361;
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
