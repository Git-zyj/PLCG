#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23865;
unsigned short var_4 = (unsigned short)38770;
long long int var_6 = 4805619674638150262LL;
short var_7 = (short)-30205;
long long int var_13 = 670283011965463772LL;
int zero = 0;
signed char var_15 = (signed char)43;
long long int var_16 = 3008941022569681165LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
