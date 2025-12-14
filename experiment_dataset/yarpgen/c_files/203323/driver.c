#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 4326879900419260211LL;
long long int var_10 = 651750269405587264LL;
unsigned int var_11 = 1415139840U;
signed char var_12 = (signed char)15;
unsigned int var_13 = 2579006995U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3585915782U;
void init() {
}

void checksum() {
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
