#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3637410745072330626LL;
long long int var_1 = 2517946689521962029LL;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-5008;
unsigned char var_9 = (unsigned char)236;
signed char var_12 = (signed char)32;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3012735824U;
int zero = 0;
long long int var_16 = 1658936766283373703LL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
