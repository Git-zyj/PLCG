#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = 56974556;
unsigned short var_6 = (unsigned short)44809;
unsigned short var_10 = (unsigned short)24000;
unsigned char var_12 = (unsigned char)125;
unsigned long long int var_13 = 15617584477712217495ULL;
int zero = 0;
long long int var_15 = 3602900783185749260LL;
unsigned char var_16 = (unsigned char)13;
int var_17 = -1971983614;
void init() {
}

void checksum() {
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
