#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2105484175;
long long int var_1 = -1323603406202857112LL;
unsigned short var_2 = (unsigned short)52991;
unsigned int var_7 = 2761601355U;
unsigned short var_9 = (unsigned short)48354;
int zero = 0;
unsigned short var_11 = (unsigned short)34954;
signed char var_12 = (signed char)120;
signed char var_13 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
