#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2863164052U;
int var_10 = -344251142;
long long int var_15 = -8941709378898992772LL;
unsigned int var_16 = 1174638514U;
int zero = 0;
long long int var_17 = -8843285533225528731LL;
unsigned int var_18 = 834116436U;
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
