#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)13978;
signed char var_3 = (signed char)-6;
unsigned char var_4 = (unsigned char)153;
signed char var_5 = (signed char)-8;
unsigned char var_10 = (unsigned char)248;
long long int var_12 = -964331531628268017LL;
int var_15 = -127154326;
int zero = 0;
unsigned int var_16 = 3450694296U;
long long int var_17 = 1027231494508958049LL;
void init() {
}

void checksum() {
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
