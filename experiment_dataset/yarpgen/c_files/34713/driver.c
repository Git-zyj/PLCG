#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 10050866993438065463ULL;
unsigned long long int var_7 = 7644064306692179329ULL;
int var_8 = -328592935;
unsigned short var_9 = (unsigned short)61203;
unsigned short var_10 = (unsigned short)33588;
long long int var_11 = 2604792501382168125LL;
int var_12 = -1232515070;
unsigned short var_13 = (unsigned short)539;
long long int var_14 = 7988191353809165365LL;
unsigned long long int var_16 = 13602076342983773400ULL;
int var_17 = 25199233;
int zero = 0;
short var_18 = (short)-2587;
int var_19 = -542730189;
signed char var_20 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
