#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 270217371U;
unsigned int var_4 = 1062725251U;
unsigned char var_8 = (unsigned char)227;
unsigned int var_16 = 963081338U;
int zero = 0;
unsigned long long int var_17 = 11266914778858901878ULL;
unsigned int var_18 = 1411919620U;
int var_19 = -691887869;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
