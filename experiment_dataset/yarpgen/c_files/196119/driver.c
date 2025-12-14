#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1181615128;
int var_2 = 334919619;
unsigned short var_6 = (unsigned short)33876;
unsigned char var_9 = (unsigned char)68;
short var_12 = (short)30390;
int var_16 = -87600389;
int zero = 0;
short var_17 = (short)-31540;
int var_18 = -946866923;
unsigned short var_19 = (unsigned short)43540;
unsigned char var_20 = (unsigned char)130;
unsigned long long int var_21 = 5116349206476768512ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
