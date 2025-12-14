#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34691;
signed char var_1 = (signed char)-79;
unsigned long long int var_3 = 13573120379388370799ULL;
signed char var_4 = (signed char)92;
int var_5 = 184476988;
long long int var_6 = -6756417617579549014LL;
signed char var_7 = (signed char)20;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1003657062U;
int var_12 = -522183951;
signed char var_13 = (signed char)-37;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
