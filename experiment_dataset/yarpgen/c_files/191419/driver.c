#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27894;
long long int var_7 = 3348997364738904335LL;
unsigned short var_16 = (unsigned short)54382;
int zero = 0;
short var_17 = (short)-15568;
unsigned char var_18 = (unsigned char)126;
unsigned short var_19 = (unsigned short)65417;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
