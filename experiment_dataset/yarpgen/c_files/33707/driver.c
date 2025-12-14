#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2349251906870217823ULL;
short var_1 = (short)23353;
int var_2 = -350457665;
int var_3 = -1220648350;
signed char var_5 = (signed char)-64;
unsigned long long int var_6 = 6735399047650824506ULL;
unsigned char var_8 = (unsigned char)84;
unsigned short var_12 = (unsigned short)52543;
int zero = 0;
unsigned short var_14 = (unsigned short)65113;
unsigned short var_15 = (unsigned short)26007;
int var_16 = -1214095365;
unsigned char var_17 = (unsigned char)168;
signed char var_18 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
