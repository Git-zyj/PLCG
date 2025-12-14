#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7128741090575125682LL;
unsigned int var_3 = 2367138652U;
_Bool var_5 = (_Bool)1;
long long int var_11 = 3039090291070941183LL;
unsigned int var_12 = 1910626873U;
unsigned int var_13 = 707517870U;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-22775;
unsigned int var_21 = 2480552822U;
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
