#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5300028011948483960ULL;
unsigned short var_2 = (unsigned short)28156;
unsigned short var_4 = (unsigned short)48805;
short var_7 = (short)-24499;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8635535999823210410LL;
short var_15 = (short)-18058;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
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
