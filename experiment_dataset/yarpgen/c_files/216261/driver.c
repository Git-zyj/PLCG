#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned short var_1 = (unsigned short)9383;
_Bool var_4 = (_Bool)0;
int var_11 = 269560574;
unsigned char var_12 = (unsigned char)69;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
unsigned short var_16 = (unsigned short)38630;
short var_17 = (short)7739;
void init() {
}

void checksum() {
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
