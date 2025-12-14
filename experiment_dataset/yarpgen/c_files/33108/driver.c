#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6782576731460124131ULL;
long long int var_3 = -6560819746268954759LL;
unsigned char var_4 = (unsigned char)208;
unsigned short var_5 = (unsigned short)33862;
short var_7 = (short)22679;
unsigned char var_8 = (unsigned char)86;
unsigned char var_9 = (unsigned char)179;
short var_11 = (short)6383;
unsigned long long int var_12 = 7423366367613646828ULL;
unsigned long long int var_13 = 9939406727924089617ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)64613;
long long int var_16 = 222741616009342872LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
