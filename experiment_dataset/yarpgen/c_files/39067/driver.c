#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31144;
unsigned long long int var_4 = 17991844705808710686ULL;
short var_12 = (short)14416;
int zero = 0;
unsigned int var_16 = 3115407148U;
unsigned int var_17 = 257601442U;
int var_18 = -551889540;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
