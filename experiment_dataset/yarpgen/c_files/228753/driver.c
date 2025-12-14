#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1902;
unsigned int var_3 = 2277861015U;
int var_6 = -1730663;
int var_10 = 313466872;
int var_12 = -545617;
signed char var_13 = (signed char)60;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 790492817;
long long int var_16 = -8898114349683086641LL;
void init() {
}

void checksum() {
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
