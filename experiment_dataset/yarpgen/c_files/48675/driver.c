#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 764952760U;
_Bool var_1 = (_Bool)0;
long long int var_4 = -2599918544421373761LL;
unsigned int var_5 = 251015898U;
short var_8 = (short)-3590;
unsigned int var_9 = 323699721U;
int zero = 0;
unsigned int var_10 = 1596742160U;
signed char var_11 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
