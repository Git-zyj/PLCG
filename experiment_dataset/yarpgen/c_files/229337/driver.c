#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1512660574U;
unsigned char var_1 = (unsigned char)187;
unsigned char var_5 = (unsigned char)219;
unsigned int var_7 = 2881895363U;
int var_10 = -1505592325;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 396845394U;
short var_14 = (short)-20781;
int zero = 0;
unsigned long long int var_15 = 11273996446886910613ULL;
_Bool var_16 = (_Bool)1;
int var_17 = 990635999;
int var_18 = -1950695920;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
