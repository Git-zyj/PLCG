#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_14 = 15950823151137843910ULL;
unsigned int var_15 = 2212932424U;
short var_16 = (short)-23550;
int zero = 0;
short var_20 = (short)-13932;
unsigned short var_21 = (unsigned short)57988;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
