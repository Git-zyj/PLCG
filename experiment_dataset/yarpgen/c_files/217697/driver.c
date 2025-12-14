#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15290306062401891757ULL;
unsigned long long int var_8 = 5702997905906863961ULL;
int zero = 0;
unsigned long long int var_11 = 267122512436864697ULL;
unsigned long long int var_12 = 13529175872061982351ULL;
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
