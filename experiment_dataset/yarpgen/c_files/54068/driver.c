#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_13 = 1562352729;
unsigned int var_14 = 2007570897U;
unsigned long long int var_17 = 4020149902351878688ULL;
int zero = 0;
unsigned long long int var_19 = 3342990645794613414ULL;
unsigned char var_20 = (unsigned char)31;
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
