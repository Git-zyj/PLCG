#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17639;
unsigned int var_3 = 2875342211U;
unsigned int var_5 = 388234881U;
unsigned int var_7 = 2926253134U;
int var_9 = -223563053;
int zero = 0;
short var_14 = (short)2776;
long long int var_15 = 7115482608599845939LL;
signed char var_16 = (signed char)87;
short var_17 = (short)-21943;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
