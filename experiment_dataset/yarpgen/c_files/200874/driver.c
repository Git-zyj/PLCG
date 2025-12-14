#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3869511569U;
unsigned short var_2 = (unsigned short)50238;
int zero = 0;
unsigned long long int var_15 = 13739352997274177994ULL;
unsigned short var_16 = (unsigned short)2120;
unsigned short var_17 = (unsigned short)40309;
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
