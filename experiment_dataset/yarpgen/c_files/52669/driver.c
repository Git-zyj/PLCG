#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51967;
short var_8 = (short)19068;
short var_16 = (short)30036;
int zero = 0;
unsigned long long int var_17 = 11026205137442204221ULL;
unsigned short var_18 = (unsigned short)16497;
unsigned short var_19 = (unsigned short)50218;
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
