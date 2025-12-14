#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28639;
unsigned long long int var_5 = 17369034533140908898ULL;
short var_6 = (short)-26512;
unsigned long long int var_8 = 16985479125101235748ULL;
unsigned int var_10 = 622238037U;
unsigned int var_11 = 846525510U;
int zero = 0;
unsigned char var_14 = (unsigned char)15;
unsigned int var_15 = 831961327U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
