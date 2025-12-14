#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2792603827U;
short var_11 = (short)-12931;
int zero = 0;
unsigned int var_17 = 1095569573U;
unsigned int var_18 = 422656893U;
unsigned int var_19 = 1108612043U;
int var_20 = 1549430819;
unsigned long long int var_21 = 2377411757944253214ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
