#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3893901077U;
unsigned int var_3 = 3033058211U;
signed char var_5 = (signed char)-125;
short var_6 = (short)-1629;
unsigned short var_8 = (unsigned short)1608;
short var_15 = (short)2299;
short var_17 = (short)27690;
unsigned char var_18 = (unsigned char)191;
unsigned long long int var_19 = 3928309023041486109ULL;
int zero = 0;
short var_20 = (short)-21276;
unsigned short var_21 = (unsigned short)56613;
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
