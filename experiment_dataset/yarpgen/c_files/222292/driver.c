#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15906;
unsigned long long int var_1 = 12895927341776998700ULL;
unsigned short var_2 = (unsigned short)399;
_Bool var_6 = (_Bool)1;
int var_7 = 1511159120;
long long int var_9 = 2223051913908071486LL;
unsigned long long int var_10 = 8328182734359306978ULL;
int zero = 0;
int var_12 = -2194613;
long long int var_13 = -8999873255364715816LL;
long long int var_14 = 3336868204567721119LL;
long long int var_15 = 4194366316399404516LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
