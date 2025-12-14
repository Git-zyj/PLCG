#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2143;
int var_3 = -1292203163;
unsigned short var_4 = (unsigned short)38033;
unsigned short var_6 = (unsigned short)40979;
short var_8 = (short)7407;
short var_10 = (short)32103;
unsigned long long int var_11 = 14741393445149432483ULL;
int zero = 0;
int var_16 = 1086541320;
unsigned long long int var_17 = 6039116107218615618ULL;
void init() {
}

void checksum() {
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
