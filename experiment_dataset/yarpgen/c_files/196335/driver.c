#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28204;
long long int var_3 = -6684078812118406839LL;
signed char var_10 = (signed char)-84;
int zero = 0;
long long int var_14 = -4053260559490596011LL;
unsigned short var_15 = (unsigned short)52017;
unsigned long long int var_16 = 16359912418808786257ULL;
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
