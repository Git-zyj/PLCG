#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49379;
unsigned int var_5 = 64566754U;
unsigned short var_10 = (unsigned short)56592;
unsigned char var_11 = (unsigned char)117;
int var_14 = 1516616405;
int zero = 0;
long long int var_15 = -7539769023300490372LL;
long long int var_16 = 3952413055077156754LL;
void init() {
}

void checksum() {
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
