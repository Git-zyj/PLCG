#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2129460487U;
short var_2 = (short)19621;
unsigned char var_3 = (unsigned char)149;
unsigned int var_5 = 1018413276U;
unsigned char var_7 = (unsigned char)184;
short var_10 = (short)27934;
unsigned char var_11 = (unsigned char)85;
long long int var_13 = 6898044216759540601LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-26;
unsigned int var_18 = 3301030721U;
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
