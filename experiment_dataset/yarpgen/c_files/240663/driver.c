#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14981096034793647122ULL;
unsigned char var_2 = (unsigned char)204;
int var_3 = 1559338788;
int var_4 = 225524869;
short var_5 = (short)24795;
unsigned long long int var_6 = 9583185135745593619ULL;
unsigned char var_8 = (unsigned char)9;
short var_9 = (short)7524;
short var_12 = (short)-24896;
unsigned char var_13 = (unsigned char)223;
signed char var_14 = (signed char)-18;
int zero = 0;
short var_15 = (short)-14298;
unsigned long long int var_16 = 18316995316639440853ULL;
long long int var_17 = 4113143574377643620LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
