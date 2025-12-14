#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1451692786930574808LL;
unsigned char var_3 = (unsigned char)182;
unsigned char var_4 = (unsigned char)3;
unsigned short var_8 = (unsigned short)57500;
long long int var_9 = -5347206042982588198LL;
int zero = 0;
unsigned short var_10 = (unsigned short)21108;
long long int var_11 = -2286576487416580725LL;
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
