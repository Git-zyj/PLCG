#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 3790925452152968315ULL;
int var_6 = 1804335243;
long long int var_7 = 8759393425982545846LL;
unsigned short var_9 = (unsigned short)54871;
unsigned int var_10 = 582845527U;
_Bool var_13 = (_Bool)0;
signed char var_16 = (signed char)47;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 4108152673U;
int var_20 = 1249952920;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
