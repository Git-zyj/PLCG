#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9768075187134882411ULL;
unsigned int var_3 = 3429067694U;
long long int var_7 = -7936293151348215068LL;
unsigned long long int var_9 = 4337561928956736353ULL;
int var_10 = 754239083;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1790481837U;
int zero = 0;
unsigned short var_16 = (unsigned short)13196;
unsigned long long int var_17 = 1390903863935954215ULL;
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
