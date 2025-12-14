#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)113;
int var_3 = 1629182519;
unsigned short var_5 = (unsigned short)9694;
short var_7 = (short)-4359;
unsigned char var_8 = (unsigned char)153;
unsigned char var_9 = (unsigned char)10;
unsigned char var_11 = (unsigned char)71;
unsigned char var_12 = (unsigned char)238;
signed char var_13 = (signed char)14;
int zero = 0;
unsigned char var_14 = (unsigned char)253;
signed char var_15 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
