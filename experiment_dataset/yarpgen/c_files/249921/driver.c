#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1793337321U;
unsigned int var_1 = 3196563178U;
unsigned int var_2 = 1711276096U;
short var_4 = (short)23300;
unsigned long long int var_5 = 6586803331106664476ULL;
unsigned int var_6 = 1142631766U;
unsigned int var_7 = 1923286614U;
unsigned long long int var_9 = 4162566206849525232ULL;
int zero = 0;
unsigned int var_10 = 3381694731U;
unsigned int var_11 = 161922971U;
unsigned long long int var_12 = 17075159038336807914ULL;
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
