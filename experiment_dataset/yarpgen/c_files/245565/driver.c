#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2101;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)59292;
unsigned long long int var_11 = 16766603258820346154ULL;
unsigned char var_14 = (unsigned char)64;
int zero = 0;
unsigned char var_15 = (unsigned char)71;
int var_16 = -809381442;
signed char var_17 = (signed char)51;
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
