#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)28425;
short var_11 = (short)-13423;
short var_12 = (short)-28321;
unsigned long long int var_13 = 16815556421430460646ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 15264377895093715835ULL;
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
