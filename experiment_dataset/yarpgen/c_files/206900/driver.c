#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1756515620;
unsigned int var_3 = 3255527129U;
unsigned char var_5 = (unsigned char)75;
short var_6 = (short)8633;
short var_9 = (short)616;
unsigned long long int var_10 = 16139156952322423760ULL;
unsigned int var_11 = 4136539939U;
unsigned long long int var_14 = 12718135697983874023ULL;
signed char var_17 = (signed char)36;
int zero = 0;
unsigned int var_19 = 3857588177U;
short var_20 = (short)11172;
void init() {
}

void checksum() {
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
