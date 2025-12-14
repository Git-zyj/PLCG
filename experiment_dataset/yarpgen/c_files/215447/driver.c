#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
long long int var_13 = -1503152735138302494LL;
signed char var_15 = (signed char)-51;
int zero = 0;
unsigned int var_16 = 1086094706U;
unsigned int var_17 = 441694535U;
unsigned int var_18 = 1407299643U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
