#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3236557445506492200ULL;
int var_4 = 2130894839;
short var_6 = (short)-2832;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-30548;
signed char var_14 = (signed char)-65;
unsigned int var_15 = 384688258U;
short var_17 = (short)-28271;
int var_18 = -529937646;
int zero = 0;
signed char var_20 = (signed char)49;
long long int var_21 = 6885063698955259738LL;
int var_22 = -511570123;
signed char var_23 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
