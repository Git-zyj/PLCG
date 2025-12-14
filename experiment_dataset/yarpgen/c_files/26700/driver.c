#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22126;
unsigned long long int var_3 = 12017002921916337189ULL;
signed char var_4 = (signed char)-33;
unsigned int var_5 = 2243702160U;
long long int var_11 = 352799356400661574LL;
long long int var_12 = -6404190680880167044LL;
int zero = 0;
unsigned char var_15 = (unsigned char)219;
short var_16 = (short)-17829;
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
