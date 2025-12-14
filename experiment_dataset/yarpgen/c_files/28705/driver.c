#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1589062179U;
int var_1 = -1077198875;
long long int var_6 = -3149046863538514850LL;
int zero = 0;
long long int var_12 = 9000562049919129152LL;
unsigned int var_13 = 3062966580U;
unsigned int var_14 = 1897592572U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
