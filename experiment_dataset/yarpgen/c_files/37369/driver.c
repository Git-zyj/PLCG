#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19217;
int var_6 = 1700913718;
unsigned char var_9 = (unsigned char)114;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)127;
int zero = 0;
unsigned int var_14 = 2353630411U;
short var_15 = (short)-574;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
