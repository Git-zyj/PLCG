#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14434;
unsigned int var_5 = 2589663249U;
signed char var_6 = (signed char)122;
unsigned short var_8 = (unsigned short)12377;
unsigned short var_10 = (unsigned short)44367;
short var_13 = (short)10672;
unsigned short var_16 = (unsigned short)35560;
int zero = 0;
long long int var_17 = 3213494109678500716LL;
short var_18 = (short)12733;
unsigned char var_19 = (unsigned char)39;
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
