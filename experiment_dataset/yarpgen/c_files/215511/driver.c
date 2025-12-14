#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11836194067975784013ULL;
int var_6 = 1154174348;
short var_7 = (short)11919;
short var_9 = (short)-30760;
signed char var_11 = (signed char)94;
short var_14 = (short)-4564;
int zero = 0;
unsigned short var_15 = (unsigned short)51538;
short var_16 = (short)2713;
unsigned char var_17 = (unsigned char)181;
unsigned int var_18 = 3793554355U;
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
