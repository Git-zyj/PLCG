#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22339;
unsigned short var_2 = (unsigned short)34968;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)192;
long long int var_13 = 7397319655628978732LL;
unsigned long long int var_14 = 2767732717837034998ULL;
long long int var_16 = 4545325332495531415LL;
unsigned char var_17 = (unsigned char)247;
int zero = 0;
unsigned short var_18 = (unsigned short)43862;
long long int var_19 = 2414784798166733168LL;
int var_20 = 1554467426;
signed char var_21 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
