#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1375465498;
signed char var_8 = (signed char)13;
unsigned int var_12 = 2795893039U;
unsigned long long int var_14 = 11694420624781336531ULL;
unsigned long long int var_15 = 16645926180141963711ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
signed char var_19 = (signed char)-112;
unsigned short var_20 = (unsigned short)53433;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
