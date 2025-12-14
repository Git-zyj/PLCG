#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1471486167U;
int zero = 0;
int var_12 = -1228647871;
unsigned int var_13 = 3097410708U;
unsigned char var_14 = (unsigned char)215;
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
