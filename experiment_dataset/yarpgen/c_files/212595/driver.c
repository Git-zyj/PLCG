#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4662917531307930928LL;
unsigned char var_4 = (unsigned char)143;
signed char var_7 = (signed char)77;
long long int var_8 = 4039031675688745328LL;
long long int var_9 = -5709508343009947391LL;
short var_11 = (short)-20769;
unsigned char var_12 = (unsigned char)233;
int var_13 = -1040184567;
int zero = 0;
short var_15 = (short)-19548;
int var_16 = -891048173;
long long int var_17 = -3284064547293805016LL;
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
