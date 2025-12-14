#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)167;
unsigned long long int var_2 = 5769665267893005601ULL;
int var_7 = 867661690;
short var_8 = (short)30186;
signed char var_9 = (signed char)1;
short var_11 = (short)31808;
int zero = 0;
int var_13 = 796774312;
int var_14 = -2095676122;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
