#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -462430773;
int var_6 = 1696316252;
int var_12 = 1876940709;
unsigned long long int var_13 = 4079899819536107264ULL;
int var_15 = -250017666;
int zero = 0;
int var_16 = 2122361740;
int var_17 = -255282802;
void init() {
}

void checksum() {
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
