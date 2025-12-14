#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1527043159;
unsigned long long int var_8 = 7253651333410527690ULL;
int zero = 0;
int var_17 = -1268932186;
unsigned short var_18 = (unsigned short)7299;
_Bool var_19 = (_Bool)1;
int var_20 = -183646256;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
