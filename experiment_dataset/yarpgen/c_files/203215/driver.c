#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1383352973;
unsigned long long int var_2 = 11621051692854486701ULL;
signed char var_5 = (signed char)-77;
short var_6 = (short)3097;
short var_8 = (short)26383;
unsigned int var_12 = 887466727U;
short var_13 = (short)-9415;
int zero = 0;
unsigned short var_14 = (unsigned short)56678;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
