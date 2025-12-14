#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1125;
unsigned char var_1 = (unsigned char)2;
unsigned short var_4 = (unsigned short)34331;
int var_7 = 35908359;
long long int var_8 = 7186162971930932048LL;
unsigned long long int var_9 = 9102230477327345738ULL;
unsigned char var_12 = (unsigned char)230;
int zero = 0;
int var_16 = 800026708;
int var_17 = 403717511;
unsigned long long int var_18 = 12264813702227635843ULL;
void init() {
}

void checksum() {
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
