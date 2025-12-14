#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4119211366U;
int var_2 = 860462150;
int var_4 = -1731619420;
int var_5 = -77489016;
unsigned short var_7 = (unsigned short)33348;
unsigned char var_10 = (unsigned char)143;
int zero = 0;
int var_13 = 706844452;
unsigned char var_14 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
