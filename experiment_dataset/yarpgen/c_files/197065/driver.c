#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17192;
unsigned short var_3 = (unsigned short)34572;
unsigned char var_4 = (unsigned char)170;
int var_7 = -1587327063;
unsigned long long int var_8 = 15523603007849838057ULL;
unsigned int var_11 = 2650778890U;
unsigned char var_14 = (unsigned char)93;
unsigned long long int var_15 = 8318501131617367564ULL;
short var_16 = (short)-1231;
unsigned long long int var_17 = 6244560953390613606ULL;
signed char var_18 = (signed char)-108;
int zero = 0;
unsigned int var_19 = 2894614244U;
unsigned short var_20 = (unsigned short)4953;
signed char var_21 = (signed char)-43;
short var_22 = (short)31337;
int var_23 = 1069514020;
unsigned long long int var_24 = 5356141488559629862ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
