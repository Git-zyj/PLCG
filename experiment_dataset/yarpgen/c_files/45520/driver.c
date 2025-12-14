#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15891730104373924743ULL;
unsigned short var_2 = (unsigned short)55381;
short var_5 = (short)-28857;
unsigned long long int var_6 = 4782664133135738380ULL;
unsigned long long int var_7 = 16584326933373598114ULL;
unsigned long long int var_9 = 18206038331362043587ULL;
unsigned long long int var_11 = 2729037086091757928ULL;
signed char var_16 = (signed char)116;
int zero = 0;
unsigned long long int var_18 = 8340328367133371604ULL;
short var_19 = (short)24731;
unsigned char var_20 = (unsigned char)90;
unsigned long long int var_21 = 12262625573778570972ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
