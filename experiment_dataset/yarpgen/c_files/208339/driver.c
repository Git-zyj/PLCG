#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6551981880995283512LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = -2910483611023163796LL;
unsigned char var_4 = (unsigned char)215;
signed char var_5 = (signed char)63;
signed char var_7 = (signed char)-115;
short var_9 = (short)6957;
unsigned char var_12 = (unsigned char)179;
unsigned char var_13 = (unsigned char)113;
int zero = 0;
signed char var_15 = (signed char)102;
unsigned int var_16 = 3637849913U;
long long int var_17 = -6658033625434355480LL;
signed char var_18 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
