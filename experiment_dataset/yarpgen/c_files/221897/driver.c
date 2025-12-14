#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60369;
short var_1 = (short)-5753;
int var_2 = 1385052071;
_Bool var_5 = (_Bool)0;
short var_8 = (short)30052;
unsigned long long int var_10 = 13692132274081605619ULL;
long long int var_12 = 3764131869738009055LL;
_Bool var_14 = (_Bool)0;
unsigned int var_18 = 1065046613U;
int zero = 0;
int var_19 = -2033055034;
unsigned long long int var_20 = 16297095623709225858ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)55404;
long long int var_23 = -6502495742425640411LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
