#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9213;
int var_4 = -124944249;
short var_5 = (short)32050;
unsigned long long int var_6 = 12478050085988381903ULL;
unsigned long long int var_7 = 15008457368623554623ULL;
unsigned char var_9 = (unsigned char)72;
unsigned short var_10 = (unsigned short)32236;
unsigned char var_11 = (unsigned char)164;
short var_14 = (short)-25149;
unsigned long long int var_15 = 5474024793653646986ULL;
int zero = 0;
unsigned long long int var_16 = 16613416448752917116ULL;
signed char var_17 = (signed char)-50;
short var_18 = (short)29538;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
