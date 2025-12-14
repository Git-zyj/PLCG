#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)40560;
int var_5 = -2033679955;
short var_9 = (short)-8833;
unsigned char var_12 = (unsigned char)91;
unsigned long long int var_14 = 5177277888338792898ULL;
long long int var_17 = -338304542909302516LL;
int zero = 0;
unsigned long long int var_18 = 12074345341287216029ULL;
short var_19 = (short)12756;
unsigned long long int var_20 = 3702094604517811336ULL;
unsigned char var_21 = (unsigned char)173;
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
