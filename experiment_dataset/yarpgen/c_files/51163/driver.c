#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16758289742553015988ULL;
long long int var_5 = 3125899950922886161LL;
unsigned int var_7 = 726179082U;
unsigned int var_9 = 1030435291U;
int var_13 = 1153434077;
int zero = 0;
long long int var_16 = -7147245551979563017LL;
unsigned long long int var_17 = 965694964634763168ULL;
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
