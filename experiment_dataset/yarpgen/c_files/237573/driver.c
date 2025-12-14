#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 2168687895442751298LL;
unsigned int var_12 = 759758460U;
int zero = 0;
long long int var_13 = 6439592399365263195LL;
short var_14 = (short)18987;
unsigned long long int var_15 = 9592731038207348770ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
