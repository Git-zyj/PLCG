#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28805;
unsigned long long int var_3 = 16151037486549240917ULL;
unsigned char var_7 = (unsigned char)73;
long long int var_10 = -6557200761689380087LL;
int zero = 0;
unsigned char var_15 = (unsigned char)112;
unsigned short var_16 = (unsigned short)27056;
signed char var_17 = (signed char)59;
long long int var_18 = -3559332769967220468LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
