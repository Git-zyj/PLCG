#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 683800597;
short var_15 = (short)8534;
unsigned int var_18 = 1075529917U;
int zero = 0;
unsigned long long int var_19 = 13828200061271972930ULL;
unsigned long long int var_20 = 10813276236060958204ULL;
void init() {
}

void checksum() {
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
