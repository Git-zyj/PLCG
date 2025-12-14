#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7279905629270869799LL;
short var_5 = (short)23554;
unsigned short var_7 = (unsigned short)1438;
unsigned short var_8 = (unsigned short)28341;
unsigned short var_9 = (unsigned short)10896;
int zero = 0;
long long int var_14 = -3815112465580603908LL;
long long int var_15 = -2955716023624521683LL;
short var_16 = (short)23089;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
