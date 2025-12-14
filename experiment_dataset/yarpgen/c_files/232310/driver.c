#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9046088554564315780LL;
signed char var_2 = (signed char)-75;
long long int var_6 = -7829495825105146855LL;
short var_8 = (short)-11736;
unsigned char var_11 = (unsigned char)31;
signed char var_13 = (signed char)-36;
unsigned int var_14 = 1969783055U;
short var_17 = (short)-3914;
int zero = 0;
long long int var_20 = 4062608705454451950LL;
short var_21 = (short)15582;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
