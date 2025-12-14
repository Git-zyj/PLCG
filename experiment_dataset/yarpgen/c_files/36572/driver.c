#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)20194;
signed char var_6 = (signed char)59;
unsigned int var_11 = 125489462U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 8579008436986820645ULL;
int var_14 = -1309249573;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12144499252435364060ULL;
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
