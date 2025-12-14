#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3179659410U;
unsigned long long int var_7 = 7073467364369078470ULL;
signed char var_8 = (signed char)122;
unsigned int var_9 = 2812414284U;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)5097;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
