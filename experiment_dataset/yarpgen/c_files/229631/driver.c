#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9223;
int var_7 = 1143149141;
unsigned int var_9 = 2862070727U;
unsigned int var_10 = 2575340244U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1391762979U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
