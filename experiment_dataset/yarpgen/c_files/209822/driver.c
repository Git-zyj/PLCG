#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
signed char var_6 = (signed char)29;
long long int var_7 = -7932101377507805814LL;
unsigned int var_11 = 889813876U;
short var_15 = (short)-17610;
short var_18 = (short)16747;
int zero = 0;
unsigned char var_19 = (unsigned char)83;
short var_20 = (short)-2658;
int var_21 = -582998477;
unsigned short var_22 = (unsigned short)51283;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
