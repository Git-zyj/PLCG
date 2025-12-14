#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 132628189U;
unsigned long long int var_5 = 2872241008204699492ULL;
unsigned char var_9 = (unsigned char)137;
unsigned int var_10 = 1443649046U;
int var_12 = -28411256;
unsigned int var_15 = 480339741U;
int zero = 0;
long long int var_17 = 3804950321238314582LL;
unsigned int var_18 = 4283454765U;
long long int var_19 = -8471703978285714424LL;
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
