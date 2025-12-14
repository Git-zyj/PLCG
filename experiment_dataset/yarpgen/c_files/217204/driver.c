#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_11 = 7207654112277013435LL;
unsigned int var_14 = 1947519442U;
unsigned short var_16 = (unsigned short)4871;
signed char var_17 = (signed char)103;
int zero = 0;
unsigned long long int var_19 = 14632194964038655948ULL;
signed char var_20 = (signed char)-30;
void init() {
}

void checksum() {
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
