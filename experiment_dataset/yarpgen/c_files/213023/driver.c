#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
_Bool var_2 = (_Bool)0;
long long int var_4 = -5618533574811809435LL;
long long int var_11 = 6295637754025998511LL;
unsigned int var_12 = 1013777185U;
int zero = 0;
unsigned int var_13 = 2041831123U;
unsigned int var_14 = 484049395U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3489416904U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
