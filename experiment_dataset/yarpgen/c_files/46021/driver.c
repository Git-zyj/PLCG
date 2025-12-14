#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1512431625;
short var_3 = (short)11527;
unsigned int var_4 = 1627007999U;
unsigned char var_7 = (unsigned char)72;
short var_13 = (short)-8583;
int zero = 0;
int var_16 = -2127095561;
signed char var_17 = (signed char)108;
unsigned char var_18 = (unsigned char)50;
int var_19 = -384775409;
unsigned int var_20 = 1388685123U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
