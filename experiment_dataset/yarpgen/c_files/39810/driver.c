#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 9193126002881309819LL;
long long int var_7 = -2016652804258771429LL;
unsigned long long int var_9 = 8514851023169072078ULL;
int zero = 0;
long long int var_10 = 6340091040446909249LL;
unsigned long long int var_11 = 8088819380045022787ULL;
unsigned int var_12 = 1013348238U;
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
