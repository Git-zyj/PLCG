#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45054;
unsigned long long int var_3 = 14453240656504130380ULL;
unsigned int var_9 = 106003087U;
signed char var_11 = (signed char)41;
unsigned long long int var_16 = 242351035572851309ULL;
int zero = 0;
unsigned long long int var_18 = 1533340092318723455ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 354458582U;
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
