#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1924714726;
long long int var_6 = -1404288423976370094LL;
unsigned char var_8 = (unsigned char)8;
short var_9 = (short)27363;
unsigned long long int var_12 = 11194836676430101190ULL;
int var_14 = -1227180739;
signed char var_17 = (signed char)38;
int zero = 0;
unsigned long long int var_18 = 2462557819542710259ULL;
short var_19 = (short)-18464;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
