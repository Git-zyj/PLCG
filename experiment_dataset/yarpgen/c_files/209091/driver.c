#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18316;
unsigned int var_7 = 1194880829U;
short var_10 = (short)30304;
unsigned char var_13 = (unsigned char)41;
int zero = 0;
unsigned int var_16 = 572352903U;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-112;
long long int var_19 = -6992835933544578308LL;
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
