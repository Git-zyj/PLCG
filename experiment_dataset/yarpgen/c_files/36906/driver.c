#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1018723531722022653LL;
unsigned char var_4 = (unsigned char)165;
unsigned char var_5 = (unsigned char)168;
short var_7 = (short)17152;
long long int var_11 = -4407271540525269882LL;
int var_12 = -100166139;
signed char var_19 = (signed char)-24;
int zero = 0;
unsigned char var_20 = (unsigned char)246;
unsigned int var_21 = 2787835561U;
void init() {
}

void checksum() {
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
