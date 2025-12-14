#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31504;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-28142;
short var_8 = (short)-3296;
signed char var_9 = (signed char)-113;
int var_10 = 1783983424;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 834216729;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)27350;
long long int var_16 = -8602869905782316241LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
