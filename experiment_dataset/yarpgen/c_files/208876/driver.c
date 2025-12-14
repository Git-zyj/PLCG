#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2046933817;
int var_2 = -1309777635;
unsigned short var_3 = (unsigned short)65365;
unsigned int var_4 = 318805525U;
short var_6 = (short)-6004;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-80;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1799729517811604257ULL;
unsigned char var_16 = (unsigned char)227;
short var_17 = (short)-29166;
void init() {
}

void checksum() {
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
