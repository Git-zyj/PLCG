#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18289;
_Bool var_7 = (_Bool)0;
long long int var_15 = -4492451618930653361LL;
unsigned short var_16 = (unsigned short)11968;
int zero = 0;
unsigned short var_18 = (unsigned short)52098;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)12934;
_Bool var_21 = (_Bool)0;
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
