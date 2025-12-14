#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1880743094U;
long long int var_1 = -6354694096556575565LL;
unsigned int var_2 = 1235624097U;
unsigned int var_3 = 714698834U;
unsigned int var_4 = 469665295U;
long long int var_5 = 8699000285468500594LL;
unsigned long long int var_6 = 232350834205034202ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6866945261909278174ULL;
int zero = 0;
long long int var_10 = -7498681351439703896LL;
long long int var_11 = 4045754978981892152LL;
unsigned long long int var_12 = 11404782754212488928ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
