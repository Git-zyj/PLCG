#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)100;
long long int var_9 = -6193813898674201910LL;
unsigned char var_12 = (unsigned char)200;
short var_17 = (short)32437;
int zero = 0;
unsigned short var_19 = (unsigned short)25994;
unsigned char var_20 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
