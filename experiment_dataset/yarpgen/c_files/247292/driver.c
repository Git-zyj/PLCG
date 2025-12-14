#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13796466103604844842ULL;
signed char var_6 = (signed char)61;
int var_7 = -1492823797;
unsigned short var_15 = (unsigned short)47866;
unsigned int var_17 = 4118602714U;
int zero = 0;
int var_18 = -1304340649;
unsigned int var_19 = 1662726984U;
unsigned long long int var_20 = 3590713851291656761ULL;
void init() {
}

void checksum() {
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
