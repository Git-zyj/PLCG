#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -906001026;
signed char var_4 = (signed char)-15;
long long int var_5 = 7563587331532459516LL;
short var_10 = (short)-3138;
int var_13 = 1214593122;
int zero = 0;
unsigned short var_14 = (unsigned short)22392;
unsigned char var_15 = (unsigned char)42;
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
