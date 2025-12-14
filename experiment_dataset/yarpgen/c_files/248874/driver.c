#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 523658860U;
int var_4 = -1333120153;
signed char var_6 = (signed char)70;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1592958499U;
int zero = 0;
signed char var_13 = (signed char)30;
_Bool var_14 = (_Bool)0;
long long int var_15 = -7300381257355174151LL;
_Bool var_16 = (_Bool)0;
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
