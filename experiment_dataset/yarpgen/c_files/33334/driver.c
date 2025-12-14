#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)66;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 7662834711906884246ULL;
int var_16 = -346975943;
signed char var_17 = (signed char)-125;
int zero = 0;
short var_19 = (short)21666;
int var_20 = -1227282487;
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
