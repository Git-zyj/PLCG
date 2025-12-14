#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1831846968;
short var_8 = (short)-26746;
unsigned short var_9 = (unsigned short)11024;
int zero = 0;
unsigned int var_19 = 2365419060U;
long long int var_20 = -698822616532734174LL;
int var_21 = -943203439;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
