#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)43;
unsigned char var_8 = (unsigned char)240;
long long int var_9 = 6734984446932236046LL;
unsigned short var_10 = (unsigned short)10749;
unsigned int var_12 = 4248760280U;
unsigned char var_14 = (unsigned char)246;
int zero = 0;
long long int var_16 = 7583802423863660213LL;
int var_17 = 1540924954;
short var_18 = (short)-22724;
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
