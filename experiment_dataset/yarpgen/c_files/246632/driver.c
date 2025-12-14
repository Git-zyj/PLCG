#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-92;
unsigned short var_2 = (unsigned short)7768;
unsigned char var_3 = (unsigned char)236;
signed char var_4 = (signed char)-102;
signed char var_8 = (signed char)-123;
_Bool var_9 = (_Bool)0;
int var_11 = -1382694462;
int zero = 0;
unsigned char var_13 = (unsigned char)79;
unsigned long long int var_14 = 12202059930016221963ULL;
signed char var_15 = (signed char)-32;
int var_16 = 1875634534;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
