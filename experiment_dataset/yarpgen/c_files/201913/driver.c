#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1621400320;
unsigned long long int var_12 = 16077326822931759426ULL;
int var_13 = 1698760538;
int var_16 = 1008193876;
int zero = 0;
unsigned int var_19 = 3198251448U;
int var_20 = -1814076772;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
