#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3076367855908003805LL;
long long int var_7 = 3245719610182059905LL;
int var_8 = -699436183;
int zero = 0;
unsigned char var_15 = (unsigned char)131;
long long int var_16 = 7652693512179814307LL;
short var_17 = (short)15824;
unsigned char var_18 = (unsigned char)10;
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
