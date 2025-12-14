#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)16442;
short var_10 = (short)-14588;
short var_11 = (short)2844;
signed char var_14 = (signed char)-89;
int zero = 0;
short var_15 = (short)-9726;
unsigned char var_16 = (unsigned char)225;
unsigned char var_17 = (unsigned char)117;
unsigned char var_18 = (unsigned char)132;
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
