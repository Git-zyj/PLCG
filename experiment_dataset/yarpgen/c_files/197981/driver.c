#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -227591363;
unsigned int var_3 = 602423496U;
unsigned int var_4 = 3931947625U;
int var_11 = 1616364231;
unsigned char var_16 = (unsigned char)68;
int zero = 0;
int var_18 = 639090015;
short var_19 = (short)16226;
void init() {
}

void checksum() {
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
