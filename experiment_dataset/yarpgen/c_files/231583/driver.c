#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
signed char var_5 = (signed char)53;
signed char var_10 = (signed char)55;
signed char var_16 = (signed char)-16;
int zero = 0;
unsigned long long int var_17 = 18372704612361919956ULL;
unsigned long long int var_18 = 9260701888843840631ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
