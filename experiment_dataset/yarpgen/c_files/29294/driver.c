#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 91472128U;
short var_1 = (short)-29261;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-29004;
unsigned long long int var_8 = 14568408338463005039ULL;
signed char var_9 = (signed char)-5;
signed char var_10 = (signed char)96;
signed char var_13 = (signed char)-110;
unsigned long long int var_14 = 5352601298146641126ULL;
int var_15 = 361508564;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)1192;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
