#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1413475920;
unsigned short var_6 = (unsigned short)61061;
unsigned short var_10 = (unsigned short)48544;
int zero = 0;
unsigned long long int var_13 = 459613157308228583ULL;
unsigned int var_14 = 3646510004U;
unsigned long long int var_15 = 9095335491299394136ULL;
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
