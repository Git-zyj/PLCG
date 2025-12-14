#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54378;
short var_7 = (short)-21073;
unsigned int var_8 = 653451310U;
unsigned int var_9 = 2317875340U;
unsigned short var_10 = (unsigned short)64758;
unsigned short var_11 = (unsigned short)9138;
unsigned int var_15 = 2812643367U;
unsigned short var_17 = (unsigned short)26538;
unsigned char var_18 = (unsigned char)246;
int zero = 0;
unsigned short var_19 = (unsigned short)63745;
unsigned short var_20 = (unsigned short)58102;
void init() {
}

void checksum() {
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
