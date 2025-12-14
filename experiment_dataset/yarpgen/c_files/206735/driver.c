#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
short var_1 = (short)-16880;
unsigned long long int var_6 = 10593067390971581558ULL;
int var_11 = 121383806;
unsigned int var_13 = 834955418U;
short var_18 = (short)812;
unsigned short var_19 = (unsigned short)54287;
int zero = 0;
unsigned int var_20 = 1614700374U;
int var_21 = -807762780;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
