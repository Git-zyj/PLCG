#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
unsigned char var_1 = (unsigned char)162;
short var_2 = (short)7184;
unsigned short var_4 = (unsigned short)60571;
unsigned char var_8 = (unsigned char)79;
unsigned short var_10 = (unsigned short)41425;
int zero = 0;
unsigned short var_12 = (unsigned short)38883;
long long int var_13 = -4596417421983727990LL;
unsigned short var_14 = (unsigned short)25158;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
