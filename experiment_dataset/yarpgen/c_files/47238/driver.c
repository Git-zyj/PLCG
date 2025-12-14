#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5209697348736486349LL;
int var_2 = 1745561558;
unsigned long long int var_9 = 11751217635152135945ULL;
int var_11 = -1329089210;
int zero = 0;
int var_19 = 97492644;
unsigned int var_20 = 2661352491U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
