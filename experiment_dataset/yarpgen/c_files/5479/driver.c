#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 741664032464456038LL;
short var_1 = (short)-22005;
unsigned long long int var_2 = 8864604624596371740ULL;
unsigned long long int var_3 = 13802313549281682350ULL;
long long int var_5 = 7452762056915450204LL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 1393158935087905221LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)36;
long long int var_12 = -7416453926548288226LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
