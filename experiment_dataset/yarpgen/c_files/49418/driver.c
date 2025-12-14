#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 407608351U;
unsigned int var_5 = 3060120297U;
unsigned long long int var_9 = 6748948497112014290ULL;
unsigned short var_10 = (unsigned short)54742;
int zero = 0;
short var_13 = (short)11164;
short var_14 = (short)-12402;
unsigned int var_15 = 3077276120U;
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
