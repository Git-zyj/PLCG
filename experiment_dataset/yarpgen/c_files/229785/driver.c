#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4764;
unsigned short var_2 = (unsigned short)44592;
signed char var_3 = (signed char)53;
unsigned short var_7 = (unsigned short)28291;
short var_8 = (short)24326;
unsigned short var_13 = (unsigned short)55384;
unsigned short var_14 = (unsigned short)48971;
long long int var_15 = 2556062444700407488LL;
int zero = 0;
signed char var_17 = (signed char)-66;
long long int var_18 = 4829606494038636372LL;
unsigned short var_19 = (unsigned short)61826;
void init() {
}

void checksum() {
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
