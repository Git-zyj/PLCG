#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4213803863U;
unsigned int var_4 = 4006477000U;
unsigned int var_5 = 2896650115U;
unsigned int var_9 = 3244716262U;
int zero = 0;
unsigned int var_14 = 2475296265U;
unsigned int var_15 = 1781876360U;
void init() {
}

void checksum() {
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
