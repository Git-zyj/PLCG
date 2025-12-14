#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)48;
unsigned long long int var_9 = 5976289134861523461ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4054009255945416256ULL;
int var_16 = -2087555149;
_Bool var_17 = (_Bool)1;
int var_18 = -1885884597;
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
