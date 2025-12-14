#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
long long int var_2 = 5014561371274077324LL;
signed char var_4 = (signed char)-13;
int var_7 = -877298950;
short var_13 = (short)1751;
unsigned char var_14 = (unsigned char)103;
short var_15 = (short)23780;
int zero = 0;
unsigned long long int var_16 = 8981897005578712531ULL;
unsigned int var_17 = 1626999814U;
unsigned short var_18 = (unsigned short)13132;
long long int var_19 = -9133476392444708216LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
