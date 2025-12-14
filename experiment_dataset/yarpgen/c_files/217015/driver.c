#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 223816194U;
unsigned long long int var_1 = 5051448266701427914ULL;
short var_9 = (short)-25552;
unsigned long long int var_10 = 15910930469405700388ULL;
unsigned char var_13 = (unsigned char)220;
unsigned short var_14 = (unsigned short)37911;
unsigned char var_16 = (unsigned char)28;
int zero = 0;
signed char var_17 = (signed char)-123;
unsigned long long int var_18 = 6298106210131294338ULL;
void init() {
}

void checksum() {
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
