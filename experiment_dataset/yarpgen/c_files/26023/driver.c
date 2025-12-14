#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-30009;
unsigned short var_7 = (unsigned short)23200;
unsigned int var_8 = 1722960496U;
unsigned int var_9 = 3428691772U;
unsigned short var_10 = (unsigned short)22104;
unsigned char var_13 = (unsigned char)2;
short var_14 = (short)-22122;
int zero = 0;
unsigned long long int var_16 = 7089908819270623193ULL;
unsigned short var_17 = (unsigned short)38582;
short var_18 = (short)-13780;
unsigned char var_19 = (unsigned char)228;
short var_20 = (short)-11567;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
