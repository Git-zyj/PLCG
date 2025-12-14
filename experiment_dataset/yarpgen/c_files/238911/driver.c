#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27100;
unsigned char var_6 = (unsigned char)129;
short var_7 = (short)31005;
unsigned short var_8 = (unsigned short)57505;
unsigned char var_9 = (unsigned char)43;
int zero = 0;
unsigned char var_16 = (unsigned char)10;
short var_17 = (short)-9218;
signed char var_18 = (signed char)100;
signed char var_19 = (signed char)90;
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
