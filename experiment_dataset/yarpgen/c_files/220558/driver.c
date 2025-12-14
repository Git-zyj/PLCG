#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43066;
unsigned int var_9 = 840927908U;
int var_12 = 820498054;
unsigned char var_13 = (unsigned char)213;
signed char var_15 = (signed char)-26;
unsigned char var_16 = (unsigned char)196;
int var_17 = -843447471;
int zero = 0;
short var_19 = (short)11698;
unsigned short var_20 = (unsigned short)65164;
unsigned short var_21 = (unsigned short)55960;
signed char var_22 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
