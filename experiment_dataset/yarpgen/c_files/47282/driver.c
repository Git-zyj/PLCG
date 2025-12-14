#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 133564304357548460ULL;
long long int var_6 = 8830422969773091841LL;
long long int var_9 = -6261521241363254550LL;
unsigned char var_11 = (unsigned char)205;
int zero = 0;
unsigned long long int var_13 = 13106098499530760525ULL;
unsigned char var_14 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
