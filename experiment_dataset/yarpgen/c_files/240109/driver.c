#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8776874215668521616LL;
int var_9 = 433421216;
short var_11 = (short)-32078;
int var_15 = -125059008;
int zero = 0;
unsigned int var_18 = 829649583U;
unsigned int var_19 = 1506965542U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
