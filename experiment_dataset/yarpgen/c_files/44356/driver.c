#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3431741186U;
unsigned int var_4 = 2594110069U;
unsigned int var_6 = 1981236033U;
unsigned short var_10 = (unsigned short)46589;
unsigned short var_11 = (unsigned short)62513;
int zero = 0;
unsigned int var_13 = 1120054536U;
unsigned short var_14 = (unsigned short)13667;
unsigned short var_15 = (unsigned short)41293;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
