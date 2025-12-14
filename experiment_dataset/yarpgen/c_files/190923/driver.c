#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 18101918836158705296ULL;
unsigned long long int var_11 = 9015537773030657997ULL;
int zero = 0;
unsigned long long int var_14 = 11680572843262403725ULL;
int var_15 = -419842899;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
