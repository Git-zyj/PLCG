#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1604240566U;
_Bool var_5 = (_Bool)1;
signed char var_11 = (signed char)-112;
signed char var_13 = (signed char)-42;
int zero = 0;
signed char var_15 = (signed char)-74;
signed char var_16 = (signed char)-70;
unsigned short var_17 = (unsigned short)23703;
void init() {
}

void checksum() {
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
