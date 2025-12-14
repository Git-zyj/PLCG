#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13688;
unsigned char var_2 = (unsigned char)202;
unsigned short var_11 = (unsigned short)63452;
long long int var_15 = -8723258760907123928LL;
int zero = 0;
long long int var_17 = -2741729158391827481LL;
unsigned short var_18 = (unsigned short)172;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
