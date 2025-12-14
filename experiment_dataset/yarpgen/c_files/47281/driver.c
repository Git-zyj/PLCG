#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7765826570296783901LL;
unsigned int var_4 = 2390431766U;
signed char var_6 = (signed char)-48;
long long int var_11 = -4202402789933001277LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 264943947U;
int zero = 0;
long long int var_15 = 8055638751762619962LL;
unsigned long long int var_16 = 3027269560604208256ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
