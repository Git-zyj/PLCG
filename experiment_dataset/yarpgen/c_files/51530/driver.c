#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)249;
unsigned int var_5 = 3255844677U;
int var_6 = 2035922251;
long long int var_7 = 4888466868715604319LL;
short var_9 = (short)-14257;
int zero = 0;
int var_10 = -398191928;
int var_11 = -1922424270;
short var_12 = (short)13303;
unsigned int var_13 = 3465600164U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
