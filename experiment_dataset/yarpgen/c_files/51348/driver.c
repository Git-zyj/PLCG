#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8050292391974357275LL;
unsigned long long int var_5 = 15372735588977723151ULL;
short var_14 = (short)-8159;
unsigned int var_18 = 2367426854U;
int zero = 0;
short var_19 = (short)-22519;
long long int var_20 = -8675616452718287346LL;
long long int var_21 = 1206070925653675045LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
