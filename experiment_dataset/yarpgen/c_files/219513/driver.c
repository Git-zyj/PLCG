#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 863408039;
unsigned int var_6 = 2549971868U;
int var_11 = 1517084322;
int zero = 0;
unsigned int var_14 = 1273150674U;
unsigned long long int var_15 = 6178262665858503402ULL;
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
