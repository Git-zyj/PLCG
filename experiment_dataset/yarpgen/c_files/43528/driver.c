#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 2812914701U;
unsigned int var_7 = 2321117411U;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)111;
unsigned long long int var_11 = 5250937801730718608ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3137092743U;
short var_16 = (short)-18318;
void init() {
}

void checksum() {
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
