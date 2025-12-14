#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
unsigned long long int var_2 = 10802089130778550753ULL;
int var_4 = 253547035;
unsigned char var_5 = (unsigned char)210;
unsigned int var_7 = 2101174661U;
unsigned short var_8 = (unsigned short)54707;
unsigned int var_9 = 1907328850U;
unsigned int var_11 = 3998477804U;
unsigned int var_13 = 3078896597U;
signed char var_14 = (signed char)30;
int zero = 0;
unsigned short var_16 = (unsigned short)43682;
unsigned char var_17 = (unsigned char)25;
unsigned char var_18 = (unsigned char)60;
unsigned short var_19 = (unsigned short)52285;
void init() {
}

void checksum() {
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
