#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 526113991;
short var_1 = (short)23570;
int var_4 = 1104428316;
signed char var_12 = (signed char)122;
long long int var_14 = 384759664758795703LL;
int zero = 0;
int var_15 = -114335764;
unsigned char var_16 = (unsigned char)198;
signed char var_17 = (signed char)-46;
unsigned short var_18 = (unsigned short)54998;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
