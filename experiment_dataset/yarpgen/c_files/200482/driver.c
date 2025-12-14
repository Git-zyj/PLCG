#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14429358652641078158ULL;
unsigned long long int var_9 = 389080294288779699ULL;
int zero = 0;
unsigned long long int var_19 = 13047371711070985033ULL;
long long int var_20 = -4103205663970534517LL;
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
