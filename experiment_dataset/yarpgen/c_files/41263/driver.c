#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21220;
long long int var_8 = -1732628486143708326LL;
int zero = 0;
int var_12 = -1064500795;
unsigned short var_13 = (unsigned short)35763;
int var_14 = 1009631393;
unsigned long long int var_15 = 10398088919967480452ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
