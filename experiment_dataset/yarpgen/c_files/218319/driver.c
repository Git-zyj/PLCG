#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12843648184107951656ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-18;
unsigned int var_7 = 3486729215U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2866167942U;
long long int var_11 = -5270420860357303421LL;
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
