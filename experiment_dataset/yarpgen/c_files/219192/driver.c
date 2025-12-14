#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8516050235707900832LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_17 = 7463966006789679790ULL;
int zero = 0;
unsigned int var_18 = 2533886155U;
signed char var_19 = (signed char)15;
unsigned int var_20 = 1561754422U;
unsigned short var_21 = (unsigned short)34750;
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
