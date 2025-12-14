#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-4161;
unsigned long long int var_5 = 12604752905206817848ULL;
unsigned short var_7 = (unsigned short)34231;
unsigned short var_10 = (unsigned short)26860;
unsigned short var_16 = (unsigned short)4943;
int zero = 0;
short var_20 = (short)-31428;
unsigned char var_21 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
