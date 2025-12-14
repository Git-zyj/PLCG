#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7297786530250169934LL;
short var_12 = (short)-29243;
signed char var_15 = (signed char)-119;
int zero = 0;
unsigned short var_16 = (unsigned short)63728;
unsigned char var_17 = (unsigned char)201;
unsigned short var_18 = (unsigned short)40510;
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
