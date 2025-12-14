#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 579536196714051378ULL;
unsigned long long int var_5 = 3369476912543373439ULL;
short var_7 = (short)-24814;
signed char var_8 = (signed char)33;
long long int var_9 = 1036894885467362913LL;
unsigned long long int var_11 = 5882713123295200910ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-8372;
long long int var_17 = -3806503671544642557LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
