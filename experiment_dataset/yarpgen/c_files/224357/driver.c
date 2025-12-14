#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5865561911935761213LL;
long long int var_10 = 7001539407191612283LL;
int zero = 0;
unsigned long long int var_11 = 1206988914615489546ULL;
unsigned long long int var_12 = 6073714963802310456ULL;
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
