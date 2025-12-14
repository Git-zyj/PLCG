#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5787818143252478335LL;
unsigned int var_1 = 1051983927U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)81;
short var_11 = (short)-2280;
short var_12 = (short)20098;
short var_14 = (short)20989;
int zero = 0;
int var_16 = -1422476855;
unsigned short var_17 = (unsigned short)36187;
unsigned int var_18 = 4042708559U;
unsigned int var_19 = 2630503203U;
unsigned int var_20 = 169513239U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
