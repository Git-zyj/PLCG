#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_10 = 2421152366717133846LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)54495;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
