#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-22681;
unsigned int var_7 = 2892688350U;
int var_9 = -1913837134;
int zero = 0;
signed char var_12 = (signed char)-30;
unsigned short var_13 = (unsigned short)31220;
signed char var_14 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
