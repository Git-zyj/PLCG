#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1229061003U;
int var_4 = -1352554775;
_Bool var_6 = (_Bool)1;
int var_7 = -889608158;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)39;
int var_11 = -479243486;
long long int var_14 = 2752690028368487369LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)40213;
int var_19 = -1959075722;
_Bool var_20 = (_Bool)0;
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
