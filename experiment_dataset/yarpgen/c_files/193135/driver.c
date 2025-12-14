#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 678985135U;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-15;
unsigned short var_5 = (unsigned short)18520;
unsigned long long int var_6 = 12271225072610856573ULL;
int var_11 = 436785321;
unsigned short var_14 = (unsigned short)65248;
int zero = 0;
short var_18 = (short)-21593;
unsigned char var_19 = (unsigned char)100;
void init() {
}

void checksum() {
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
