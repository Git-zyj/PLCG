#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4397;
unsigned char var_2 = (unsigned char)92;
unsigned char var_4 = (unsigned char)112;
signed char var_5 = (signed char)127;
int var_6 = 1729619528;
unsigned char var_11 = (unsigned char)181;
long long int var_14 = 3256387842152585558LL;
short var_15 = (short)-1891;
int zero = 0;
long long int var_16 = 7917447971310453153LL;
unsigned char var_17 = (unsigned char)17;
unsigned short var_18 = (unsigned short)14557;
int var_19 = 1842930657;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
