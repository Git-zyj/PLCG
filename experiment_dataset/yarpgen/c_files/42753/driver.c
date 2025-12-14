#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5087974301832176211ULL;
long long int var_5 = -8156368618214831783LL;
_Bool var_7 = (_Bool)1;
short var_16 = (short)-9149;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 915720110;
signed char var_20 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
