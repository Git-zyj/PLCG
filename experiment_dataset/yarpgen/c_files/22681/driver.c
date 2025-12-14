#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64688;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2494017804U;
signed char var_9 = (signed char)-26;
int zero = 0;
long long int var_14 = -5473201776312726493LL;
unsigned int var_15 = 2729827692U;
long long int var_16 = -7020197553445871955LL;
unsigned int var_17 = 2544568627U;
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
