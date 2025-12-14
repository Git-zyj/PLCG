#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29067;
unsigned long long int var_3 = 12281800183617057522ULL;
int var_5 = 1053813914;
unsigned short var_9 = (unsigned short)36166;
unsigned short var_10 = (unsigned short)47580;
unsigned int var_11 = 1040687471U;
unsigned long long int var_12 = 16208057807557371844ULL;
int zero = 0;
unsigned int var_14 = 4204872748U;
int var_15 = 1887686846;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
