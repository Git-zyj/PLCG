#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)17;
int var_4 = -2093065919;
long long int var_5 = -3239421063136387606LL;
unsigned short var_8 = (unsigned short)40743;
long long int var_12 = 4849579254676580237LL;
int zero = 0;
unsigned short var_15 = (unsigned short)21157;
short var_16 = (short)17134;
unsigned short var_17 = (unsigned short)57754;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
