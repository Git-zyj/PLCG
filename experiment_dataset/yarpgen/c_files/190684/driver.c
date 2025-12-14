#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11002454259475602038ULL;
short var_3 = (short)-3390;
unsigned int var_7 = 630314542U;
short var_12 = (short)17733;
long long int var_17 = -2213533568421111673LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 5513152922973351574ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)52907;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
