#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8710013594566036590ULL;
unsigned short var_1 = (unsigned short)39258;
long long int var_4 = 8880932657049270972LL;
unsigned short var_5 = (unsigned short)7289;
short var_8 = (short)-1809;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 1096720873U;
long long int var_12 = -3902136427589328289LL;
unsigned short var_13 = (unsigned short)37159;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
