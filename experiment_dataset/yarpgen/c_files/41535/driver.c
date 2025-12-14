#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3955896095U;
int var_1 = -283901461;
signed char var_4 = (signed char)-110;
unsigned short var_5 = (unsigned short)57363;
int var_9 = -1630326468;
int var_11 = -1540636800;
unsigned int var_13 = 525314916U;
int zero = 0;
unsigned short var_14 = (unsigned short)2715;
unsigned char var_15 = (unsigned char)113;
int var_16 = 2145055134;
unsigned int var_17 = 3086846878U;
unsigned short var_18 = (unsigned short)43231;
unsigned short var_19 = (unsigned short)59460;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
