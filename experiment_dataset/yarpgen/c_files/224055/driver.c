#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = 1789750136;
signed char var_7 = (signed char)-23;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 4389076768472558025ULL;
int zero = 0;
unsigned int var_13 = 1258932823U;
signed char var_14 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
