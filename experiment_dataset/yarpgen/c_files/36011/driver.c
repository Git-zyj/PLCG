#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1572744218U;
int var_8 = -1696864364;
short var_13 = (short)4278;
unsigned int var_17 = 2199796721U;
short var_18 = (short)25299;
int zero = 0;
short var_20 = (short)-20891;
short var_21 = (short)31476;
short var_22 = (short)-24962;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
