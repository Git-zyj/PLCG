#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1107190492494516457ULL;
signed char var_2 = (signed char)-61;
short var_6 = (short)-21717;
int zero = 0;
int var_10 = -1986707140;
unsigned int var_11 = 2452704265U;
unsigned char var_12 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
