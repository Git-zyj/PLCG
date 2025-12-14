#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
_Bool var_1 = (_Bool)0;
short var_3 = (short)9615;
unsigned long long int var_4 = 2660111875676956192ULL;
short var_5 = (short)-18718;
short var_9 = (short)-9990;
unsigned long long int var_10 = 11061949849898579848ULL;
short var_11 = (short)24357;
unsigned int var_13 = 1716146557U;
int zero = 0;
signed char var_14 = (signed char)-9;
int var_15 = 1972707513;
signed char var_16 = (signed char)-34;
int var_17 = -535717776;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
