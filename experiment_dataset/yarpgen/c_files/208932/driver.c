#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9506;
int var_3 = 1978989265;
unsigned short var_14 = (unsigned short)8870;
int zero = 0;
short var_19 = (short)-6672;
unsigned long long int var_20 = 6200218685121481581ULL;
unsigned int var_21 = 3792748031U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
