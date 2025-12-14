#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14942737712998549855ULL;
unsigned long long int var_10 = 333478909890037072ULL;
int zero = 0;
unsigned long long int var_11 = 6266176381784483873ULL;
unsigned long long int var_12 = 13437206319521480143ULL;
void init() {
}

void checksum() {
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
