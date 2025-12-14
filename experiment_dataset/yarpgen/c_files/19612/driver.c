#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_5 = 365634640691612715LL;
short var_6 = (short)-24747;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3139654107U;
int zero = 0;
unsigned char var_15 = (unsigned char)42;
unsigned short var_16 = (unsigned short)30966;
signed char var_17 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
