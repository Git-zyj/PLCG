#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_5 = 2250715829U;
short var_6 = (short)-11559;
long long int var_8 = -662279252652027403LL;
unsigned char var_14 = (unsigned char)199;
short var_15 = (short)-24188;
unsigned long long int var_16 = 5552059936049455226ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2663862620U;
long long int var_20 = -8503358082897080632LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
