#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10477033212646942086ULL;
unsigned long long int var_17 = 11036481546508954448ULL;
int zero = 0;
unsigned long long int var_19 = 10738335897866944012ULL;
unsigned long long int var_20 = 11404027333318625696ULL;
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
