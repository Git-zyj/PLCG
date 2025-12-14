#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1751328158U;
int var_3 = 2104524851;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)7;
int zero = 0;
long long int var_15 = -6525433731184021503LL;
long long int var_16 = -4893128827699846409LL;
unsigned int var_17 = 852677893U;
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
