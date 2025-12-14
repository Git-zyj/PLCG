#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
signed char var_1 = (signed char)-46;
long long int var_3 = 935693517338331853LL;
unsigned char var_4 = (unsigned char)254;
unsigned long long int var_7 = 14260449758512093229ULL;
unsigned long long int var_13 = 18065890536398153433ULL;
unsigned char var_14 = (unsigned char)45;
int zero = 0;
unsigned short var_15 = (unsigned short)19039;
unsigned char var_16 = (unsigned char)91;
short var_17 = (short)-9730;
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
