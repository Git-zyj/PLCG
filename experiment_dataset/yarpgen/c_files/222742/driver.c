#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1127915069;
unsigned long long int var_13 = 10714620460670834676ULL;
unsigned int var_14 = 1292157491U;
int var_15 = 897991832;
unsigned long long int var_16 = 8724924986251448931ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)242;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
