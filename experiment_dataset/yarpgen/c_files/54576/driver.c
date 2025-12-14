#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1479;
_Bool var_1 = (_Bool)1;
short var_4 = (short)3082;
_Bool var_7 = (_Bool)1;
long long int var_10 = -4391181296478328138LL;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)85;
int zero = 0;
int var_18 = 49497717;
signed char var_19 = (signed char)13;
unsigned int var_20 = 780430051U;
void init() {
}

void checksum() {
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
