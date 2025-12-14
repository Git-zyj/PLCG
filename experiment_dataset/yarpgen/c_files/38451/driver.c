#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23738;
int var_3 = -102967755;
int var_9 = 1797935801;
unsigned short var_13 = (unsigned short)30711;
unsigned long long int var_15 = 8061162308383581725ULL;
int zero = 0;
signed char var_16 = (signed char)-107;
short var_17 = (short)2716;
int var_18 = -1185703030;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
