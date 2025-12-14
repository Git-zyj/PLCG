#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1007807250;
unsigned int var_2 = 1848298503U;
int var_3 = -1577976255;
unsigned int var_4 = 3854136902U;
signed char var_7 = (signed char)46;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1546052997U;
int var_12 = 1842891723;
int zero = 0;
int var_18 = 2005185915;
unsigned int var_19 = 3148577978U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
