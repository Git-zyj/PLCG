#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 766651001743682292ULL;
unsigned char var_3 = (unsigned char)118;
short var_7 = (short)5094;
unsigned short var_12 = (unsigned short)63533;
int zero = 0;
short var_13 = (short)-14025;
short var_14 = (short)3345;
short var_15 = (short)16021;
void init() {
}

void checksum() {
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
