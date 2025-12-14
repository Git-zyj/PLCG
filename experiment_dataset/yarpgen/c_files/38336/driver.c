#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 221288789U;
signed char var_4 = (signed char)-15;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 1000524652440949907ULL;
int var_9 = 933721819;
int var_10 = -2110044169;
long long int var_12 = -4878598152026631740LL;
unsigned long long int var_13 = 56547931683640476ULL;
int zero = 0;
unsigned int var_15 = 1213213634U;
long long int var_16 = -7696604412003087878LL;
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
