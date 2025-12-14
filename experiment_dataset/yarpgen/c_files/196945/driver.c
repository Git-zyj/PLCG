#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
unsigned char var_6 = (unsigned char)62;
unsigned char var_10 = (unsigned char)242;
unsigned long long int var_13 = 9235375524368013044ULL;
int zero = 0;
unsigned long long int var_14 = 1036253419196561548ULL;
unsigned short var_15 = (unsigned short)51644;
int var_16 = -966673110;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
