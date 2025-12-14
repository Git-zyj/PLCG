#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3004517543193308435LL;
signed char var_10 = (signed char)122;
long long int var_14 = -6744708663945372185LL;
int zero = 0;
signed char var_15 = (signed char)72;
long long int var_16 = -2339420570746137195LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
