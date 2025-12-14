#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 855213599U;
int var_1 = -169714470;
unsigned int var_3 = 2001684635U;
unsigned char var_5 = (unsigned char)91;
unsigned int var_9 = 2312291951U;
int zero = 0;
int var_13 = -1404322455;
int var_14 = -1905791804;
int var_15 = 1408473528;
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
