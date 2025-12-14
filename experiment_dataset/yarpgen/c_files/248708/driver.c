#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
long long int var_2 = -4543036668199404745LL;
signed char var_3 = (signed char)-83;
long long int var_4 = -5354204045030526718LL;
unsigned char var_7 = (unsigned char)76;
unsigned short var_8 = (unsigned short)10404;
unsigned short var_12 = (unsigned short)32930;
short var_13 = (short)-1205;
int var_14 = 260683300;
int var_15 = 1744675217;
int zero = 0;
int var_18 = -1428288557;
int var_19 = 343358541;
short var_20 = (short)-32370;
unsigned short var_21 = (unsigned short)45377;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
