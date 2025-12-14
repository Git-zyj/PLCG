#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -473462321;
unsigned int var_3 = 2053099460U;
signed char var_9 = (signed char)124;
unsigned char var_11 = (unsigned char)14;
int var_14 = -776333597;
int zero = 0;
int var_17 = -902593068;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
