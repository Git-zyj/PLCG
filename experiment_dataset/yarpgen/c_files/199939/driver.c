#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24807;
unsigned int var_1 = 3400942397U;
unsigned long long int var_2 = 4832958360718431075ULL;
unsigned int var_5 = 809954168U;
short var_8 = (short)11068;
int zero = 0;
unsigned short var_10 = (unsigned short)10099;
int var_11 = -1002344573;
unsigned short var_12 = (unsigned short)51123;
unsigned long long int var_13 = 13690851375033247663ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
