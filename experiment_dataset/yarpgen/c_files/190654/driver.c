#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8786;
int var_5 = 1263859809;
unsigned short var_11 = (unsigned short)23404;
int var_14 = -1427352244;
int zero = 0;
long long int var_15 = -3142987769325021573LL;
short var_16 = (short)-32132;
void init() {
}

void checksum() {
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
