#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 745100432;
signed char var_2 = (signed char)97;
int var_5 = -1554034540;
unsigned long long int var_6 = 7959145970395714061ULL;
int var_9 = 830078873;
unsigned long long int var_10 = 13953885880110564556ULL;
unsigned short var_13 = (unsigned short)3126;
signed char var_14 = (signed char)108;
int zero = 0;
unsigned short var_15 = (unsigned short)12341;
unsigned char var_16 = (unsigned char)233;
unsigned long long int var_17 = 2549734550510534507ULL;
unsigned char var_18 = (unsigned char)100;
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
