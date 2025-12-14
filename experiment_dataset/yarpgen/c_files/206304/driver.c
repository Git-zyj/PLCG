#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19553;
unsigned char var_6 = (unsigned char)243;
short var_7 = (short)22002;
unsigned char var_10 = (unsigned char)105;
unsigned int var_11 = 931092372U;
signed char var_14 = (signed char)-28;
int zero = 0;
signed char var_17 = (signed char)119;
unsigned char var_18 = (unsigned char)122;
void init() {
}

void checksum() {
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
