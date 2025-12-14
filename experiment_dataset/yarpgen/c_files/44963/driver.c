#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6532494465972748059ULL;
unsigned int var_7 = 2898735175U;
short var_9 = (short)3176;
short var_11 = (short)2963;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1260775333U;
unsigned char var_16 = (unsigned char)40;
short var_17 = (short)16149;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
