#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)67;
signed char var_5 = (signed char)43;
unsigned int var_6 = 1229849987U;
long long int var_7 = 360416332716923996LL;
unsigned long long int var_9 = 12930429592188958650ULL;
unsigned char var_10 = (unsigned char)33;
int zero = 0;
unsigned short var_14 = (unsigned short)60237;
short var_15 = (short)-17410;
short var_16 = (short)9174;
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
