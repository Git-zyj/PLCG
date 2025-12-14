#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1042769993;
unsigned int var_6 = 3977926029U;
short var_9 = (short)-5194;
unsigned long long int var_15 = 14925429863457889864ULL;
int zero = 0;
unsigned long long int var_19 = 3399164220051291347ULL;
unsigned int var_20 = 632950988U;
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
