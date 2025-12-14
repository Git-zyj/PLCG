#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17182;
short var_3 = (short)-30181;
unsigned short var_5 = (unsigned short)28077;
short var_6 = (short)20323;
unsigned short var_7 = (unsigned short)34924;
unsigned short var_8 = (unsigned short)37721;
short var_9 = (short)-18329;
int zero = 0;
unsigned short var_13 = (unsigned short)42050;
short var_14 = (short)-4756;
unsigned short var_15 = (unsigned short)272;
unsigned short var_16 = (unsigned short)49397;
short var_17 = (short)3642;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
