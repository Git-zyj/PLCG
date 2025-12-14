#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
signed char var_1 = (signed char)-100;
unsigned char var_3 = (unsigned char)204;
unsigned char var_5 = (unsigned char)144;
signed char var_6 = (signed char)107;
short var_7 = (short)19795;
signed char var_8 = (signed char)120;
signed char var_9 = (signed char)74;
int zero = 0;
signed char var_10 = (signed char)51;
long long int var_11 = -2345458580909723699LL;
unsigned int var_12 = 1188468800U;
unsigned short var_13 = (unsigned short)10475;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
