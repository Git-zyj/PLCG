#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8907;
unsigned short var_5 = (unsigned short)22354;
unsigned short var_8 = (unsigned short)39906;
int var_9 = 1361858141;
unsigned short var_10 = (unsigned short)48916;
int zero = 0;
unsigned short var_11 = (unsigned short)36041;
unsigned short var_12 = (unsigned short)36654;
unsigned short var_13 = (unsigned short)29405;
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
