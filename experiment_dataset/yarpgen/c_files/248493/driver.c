#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22128;
signed char var_3 = (signed char)70;
int var_7 = -487702163;
int var_8 = 979273530;
int zero = 0;
int var_10 = 1425086494;
short var_11 = (short)-13626;
int var_12 = -1438382745;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
