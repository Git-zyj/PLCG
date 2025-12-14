#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)56;
signed char var_2 = (signed char)14;
unsigned int var_3 = 3334248535U;
int var_4 = -622412172;
short var_5 = (short)20281;
signed char var_6 = (signed char)107;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_10 = -9215666578877232357LL;
unsigned int var_11 = 1964506431U;
signed char var_12 = (signed char)-70;
unsigned long long int var_13 = 6425904243946098853ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
