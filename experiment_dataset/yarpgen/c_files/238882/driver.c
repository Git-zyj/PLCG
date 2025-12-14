#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)39473;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 9370432314288422478ULL;
long long int var_10 = -2587603110333356620LL;
signed char var_12 = (signed char)30;
unsigned int var_13 = 1490216027U;
int zero = 0;
unsigned short var_17 = (unsigned short)58239;
signed char var_18 = (signed char)98;
signed char var_19 = (signed char)66;
long long int var_20 = 8707872093795636675LL;
void init() {
}

void checksum() {
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
