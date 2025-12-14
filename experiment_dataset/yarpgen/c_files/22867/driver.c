#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5540824872096018230ULL;
unsigned long long int var_6 = 9616272234342199072ULL;
unsigned long long int var_10 = 13394479636202986688ULL;
int zero = 0;
unsigned long long int var_11 = 8025920956908465497ULL;
unsigned long long int var_12 = 1336019026807617240ULL;
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
