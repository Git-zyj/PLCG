#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23456;
unsigned long long int var_8 = 5343417674222635539ULL;
short var_10 = (short)22332;
short var_12 = (short)28943;
int zero = 0;
long long int var_16 = 5652654486538019857LL;
short var_17 = (short)-29250;
int var_18 = -1897954829;
unsigned short var_19 = (unsigned short)13138;
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
