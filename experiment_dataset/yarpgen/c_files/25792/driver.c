#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6183016579165820516LL;
unsigned int var_6 = 3925170157U;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-47;
unsigned int var_12 = 2379695176U;
unsigned int var_13 = 1131832614U;
void init() {
}

void checksum() {
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
