#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
unsigned char var_2 = (unsigned char)190;
unsigned char var_3 = (unsigned char)101;
long long int var_5 = -7652225341646323228LL;
int var_7 = -34640831;
unsigned short var_9 = (unsigned short)347;
int zero = 0;
unsigned int var_10 = 1449659355U;
int var_11 = 1111976958;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
