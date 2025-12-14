#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_6 = 2576801237240424512LL;
long long int var_12 = 5459246102791419452LL;
unsigned int var_14 = 1388321258U;
unsigned long long int var_15 = 1551929958576308882ULL;
int zero = 0;
long long int var_17 = 1508371367888734451LL;
unsigned short var_18 = (unsigned short)29228;
long long int var_19 = -4239206466377057282LL;
long long int var_20 = -8248836042525959558LL;
long long int var_21 = -5098110256870368148LL;
unsigned int var_22 = 2902329761U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
