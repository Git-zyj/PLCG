#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2982737107U;
unsigned int var_4 = 655238418U;
unsigned int var_5 = 4154330281U;
unsigned int var_6 = 3964370903U;
unsigned int var_8 = 91663091U;
unsigned int var_9 = 1423629007U;
int zero = 0;
unsigned int var_10 = 1907447537U;
unsigned int var_11 = 4230290588U;
unsigned int var_12 = 3333084883U;
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
