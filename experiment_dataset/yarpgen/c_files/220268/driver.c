#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1601704281;
unsigned char var_5 = (unsigned char)115;
unsigned long long int var_6 = 13295179850335536509ULL;
int var_7 = 1057954017;
unsigned char var_8 = (unsigned char)106;
unsigned char var_9 = (unsigned char)45;
_Bool var_10 = (_Bool)1;
int var_12 = 1005088804;
int zero = 0;
short var_13 = (short)32630;
unsigned char var_14 = (unsigned char)205;
signed char var_15 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
