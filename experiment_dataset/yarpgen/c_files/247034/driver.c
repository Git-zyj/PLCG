#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31423;
unsigned short var_2 = (unsigned short)53819;
short var_4 = (short)-32679;
unsigned short var_6 = (unsigned short)59955;
unsigned short var_14 = (unsigned short)14103;
short var_15 = (short)-9332;
int zero = 0;
short var_20 = (short)-12598;
short var_21 = (short)30387;
short var_22 = (short)-9807;
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
