#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30963;
long long int var_4 = -1903384693788377448LL;
unsigned char var_7 = (unsigned char)62;
short var_9 = (short)-18360;
unsigned int var_11 = 1360186008U;
short var_13 = (short)-30503;
unsigned int var_14 = 3165593622U;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6871640847977145142LL;
short var_18 = (short)-709;
int var_19 = -265161471;
signed char var_20 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
