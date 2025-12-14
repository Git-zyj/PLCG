#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 3743232558956700416ULL;
signed char var_13 = (signed char)122;
unsigned int var_15 = 781445412U;
int zero = 0;
int var_19 = 463425228;
long long int var_20 = 8723899208500985146LL;
unsigned int var_21 = 4181385227U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
