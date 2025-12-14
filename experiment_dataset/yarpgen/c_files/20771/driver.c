#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1620118199;
short var_2 = (short)18669;
long long int var_4 = 4164429683339537159LL;
unsigned int var_10 = 498346037U;
int zero = 0;
long long int var_13 = 6667152921242446972LL;
unsigned long long int var_14 = 17295092277715164555ULL;
unsigned long long int var_15 = 11265060530208382006ULL;
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
