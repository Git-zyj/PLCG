#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11300;
long long int var_4 = 7486513687068240648LL;
unsigned char var_6 = (unsigned char)23;
unsigned char var_7 = (unsigned char)27;
unsigned char var_8 = (unsigned char)250;
int var_10 = -1873420512;
unsigned char var_12 = (unsigned char)209;
short var_13 = (short)2894;
int var_14 = 71676778;
int zero = 0;
signed char var_15 = (signed char)-118;
unsigned char var_16 = (unsigned char)61;
short var_17 = (short)-29020;
unsigned char var_18 = (unsigned char)229;
void init() {
}

void checksum() {
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
