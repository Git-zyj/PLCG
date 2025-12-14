#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1672453632315108305LL;
long long int var_4 = -6533352950586170562LL;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)15292;
unsigned int var_12 = 3432522681U;
long long int var_15 = -412451600555746632LL;
int zero = 0;
int var_18 = 602751280;
unsigned short var_19 = (unsigned short)58230;
long long int var_20 = 5177937577941293495LL;
short var_21 = (short)29057;
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
