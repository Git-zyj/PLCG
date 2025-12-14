#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7406593494919676201ULL;
unsigned char var_3 = (unsigned char)76;
short var_6 = (short)8822;
unsigned short var_9 = (unsigned short)2177;
unsigned char var_10 = (unsigned char)90;
short var_11 = (short)11927;
int zero = 0;
unsigned short var_13 = (unsigned short)53384;
signed char var_14 = (signed char)-1;
int var_15 = -792504787;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
