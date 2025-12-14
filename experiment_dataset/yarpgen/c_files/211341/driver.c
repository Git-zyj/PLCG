#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17298;
unsigned short var_2 = (unsigned short)57927;
long long int var_7 = -5046731021176893350LL;
unsigned short var_9 = (unsigned short)3186;
unsigned char var_11 = (unsigned char)114;
int zero = 0;
int var_16 = -654134036;
unsigned char var_17 = (unsigned char)91;
unsigned short var_18 = (unsigned short)2752;
void init() {
}

void checksum() {
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
