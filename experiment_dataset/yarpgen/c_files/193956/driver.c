#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4391738056936620627LL;
unsigned long long int var_7 = 14110022416873116191ULL;
unsigned int var_10 = 529399306U;
_Bool var_11 = (_Bool)0;
int var_12 = 909732739;
short var_16 = (short)29905;
unsigned long long int var_18 = 10343522483090132651ULL;
int zero = 0;
long long int var_19 = 5105859172182433485LL;
unsigned int var_20 = 2192794498U;
int var_21 = 1154748017;
void init() {
}

void checksum() {
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
