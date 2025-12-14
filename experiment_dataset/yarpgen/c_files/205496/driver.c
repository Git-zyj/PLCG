#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61174;
unsigned long long int var_1 = 10881750529599665455ULL;
unsigned int var_2 = 4126667888U;
unsigned char var_4 = (unsigned char)169;
int var_5 = -1295777048;
unsigned short var_6 = (unsigned short)25993;
unsigned long long int var_7 = 6537163907950103592ULL;
short var_10 = (short)-28913;
int var_12 = -959823419;
int zero = 0;
signed char var_14 = (signed char)39;
unsigned int var_15 = 2640772312U;
unsigned char var_16 = (unsigned char)75;
short var_17 = (short)-14869;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
