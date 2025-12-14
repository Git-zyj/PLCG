#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 642019261;
unsigned short var_5 = (unsigned short)18261;
unsigned short var_14 = (unsigned short)29976;
int zero = 0;
int var_15 = 217900799;
int var_16 = 1007407787;
unsigned short var_17 = (unsigned short)24490;
void init() {
}

void checksum() {
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
