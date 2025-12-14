#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1659402495;
int var_2 = 1407489836;
unsigned int var_5 = 1033355336U;
int var_9 = -935744069;
unsigned int var_10 = 227249491U;
int zero = 0;
int var_15 = -651053888;
int var_16 = -1474380067;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
