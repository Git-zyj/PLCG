#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)123;
long long int var_9 = -2187931350151698316LL;
short var_10 = (short)4484;
long long int var_13 = 3236329591571642919LL;
signed char var_15 = (signed char)-53;
int zero = 0;
int var_16 = 1926176355;
unsigned char var_17 = (unsigned char)48;
signed char var_18 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
