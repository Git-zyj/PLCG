#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3625669506U;
unsigned int var_6 = 3260694815U;
unsigned long long int var_10 = 14582169067944102921ULL;
int zero = 0;
unsigned int var_12 = 3052563152U;
unsigned long long int var_13 = 3460166929307774242ULL;
unsigned int var_14 = 510880175U;
unsigned int var_15 = 3094607525U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
