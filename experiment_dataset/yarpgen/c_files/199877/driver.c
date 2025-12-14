#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 670019166U;
unsigned int var_9 = 2699458499U;
int zero = 0;
unsigned int var_11 = 4214621641U;
unsigned long long int var_12 = 5632350948154532704ULL;
unsigned long long int var_13 = 13187966475678409360ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
