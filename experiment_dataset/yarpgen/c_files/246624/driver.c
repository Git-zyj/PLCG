#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2825833907U;
long long int var_2 = 9082178997036080139LL;
_Bool var_3 = (_Bool)0;
long long int var_11 = -4162157241266945914LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-71;
int var_19 = -893044138;
_Bool var_20 = (_Bool)0;
short var_21 = (short)29236;
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
