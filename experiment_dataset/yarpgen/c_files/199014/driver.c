#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 809848963U;
unsigned int var_2 = 2147851569U;
signed char var_7 = (signed char)28;
signed char var_8 = (signed char)64;
int zero = 0;
int var_13 = -1819720925;
_Bool var_14 = (_Bool)1;
int var_15 = 1444460989;
int var_16 = -747521261;
void init() {
}

void checksum() {
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
