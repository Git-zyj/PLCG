#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)44;
unsigned char var_8 = (unsigned char)133;
unsigned char var_9 = (unsigned char)130;
unsigned char var_10 = (unsigned char)62;
int zero = 0;
int var_11 = -200042957;
long long int var_12 = -4222774171091886608LL;
unsigned short var_13 = (unsigned short)46951;
unsigned char var_14 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
