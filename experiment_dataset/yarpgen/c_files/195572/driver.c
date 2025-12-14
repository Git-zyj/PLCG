#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3713;
int var_6 = -7914260;
long long int var_10 = 1526340893306996525LL;
unsigned int var_11 = 997105731U;
unsigned int var_13 = 2425083743U;
int zero = 0;
unsigned char var_14 = (unsigned char)40;
short var_15 = (short)25706;
short var_16 = (short)28628;
void init() {
}

void checksum() {
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
