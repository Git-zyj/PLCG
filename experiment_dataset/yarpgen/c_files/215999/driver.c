#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8936054364073680402ULL;
long long int var_5 = 8400057167216125099LL;
int var_10 = -1724069208;
int zero = 0;
signed char var_11 = (signed char)-107;
unsigned long long int var_12 = 16104040956252967636ULL;
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
