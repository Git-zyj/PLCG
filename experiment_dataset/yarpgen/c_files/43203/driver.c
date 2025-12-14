#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 52046952U;
long long int var_6 = 3622899920320013196LL;
int var_8 = 110322821;
signed char var_12 = (signed char)115;
long long int var_16 = -4093560009065275100LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 6629548051673560772LL;
unsigned int var_22 = 3765451474U;
short var_23 = (short)17033;
void init() {
}

void checksum() {
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
