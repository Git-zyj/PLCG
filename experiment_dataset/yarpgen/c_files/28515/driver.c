#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
signed char var_1 = (signed char)104;
unsigned char var_2 = (unsigned char)245;
unsigned long long int var_3 = 6773267743782211636ULL;
unsigned short var_4 = (unsigned short)44765;
unsigned char var_5 = (unsigned char)143;
unsigned int var_8 = 3728331495U;
long long int var_9 = -6050633122051070805LL;
long long int var_11 = -7493495918110812403LL;
signed char var_13 = (signed char)-23;
int zero = 0;
unsigned short var_17 = (unsigned short)25014;
unsigned char var_18 = (unsigned char)33;
int var_19 = -700017380;
short var_20 = (short)-2664;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
