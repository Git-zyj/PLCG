#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 8693949675811851150ULL;
int zero = 0;
unsigned long long int var_15 = 1270609453381038074ULL;
unsigned int var_16 = 1336856361U;
unsigned long long int var_17 = 6942376685732301002ULL;
long long int var_18 = -939005251023211256LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
