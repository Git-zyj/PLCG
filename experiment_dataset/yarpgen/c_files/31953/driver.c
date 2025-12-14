#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30432;
int var_1 = 1823832577;
signed char var_2 = (signed char)61;
long long int var_3 = 3275514908203325924LL;
short var_5 = (short)-5186;
unsigned int var_6 = 1450476287U;
int var_7 = 1777902569;
_Bool var_8 = (_Bool)1;
int var_11 = 1670108941;
int zero = 0;
unsigned short var_12 = (unsigned short)2449;
unsigned int var_13 = 3441554431U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
