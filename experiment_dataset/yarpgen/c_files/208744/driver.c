#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
short var_4 = (short)-9427;
unsigned short var_6 = (unsigned short)58962;
unsigned char var_8 = (unsigned char)89;
signed char var_9 = (signed char)27;
unsigned short var_10 = (unsigned short)59717;
int var_12 = -827716590;
unsigned char var_14 = (unsigned char)147;
unsigned short var_16 = (unsigned short)48826;
int zero = 0;
short var_20 = (short)31249;
int var_21 = 1660982716;
long long int var_22 = 2994504279333835943LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
