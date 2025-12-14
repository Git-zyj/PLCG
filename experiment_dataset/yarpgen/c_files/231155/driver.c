#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned int var_1 = 1175953906U;
int var_4 = -841121104;
long long int var_5 = 1819488824671650093LL;
int var_7 = 1354086051;
int zero = 0;
unsigned long long int var_11 = 7496999161689168368ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-21;
long long int var_14 = -536299076931587575LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
