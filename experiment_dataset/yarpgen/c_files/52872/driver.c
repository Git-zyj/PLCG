#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_6 = (short)-5867;
unsigned char var_8 = (unsigned char)233;
unsigned long long int var_9 = 1822610713522660951ULL;
unsigned char var_11 = (unsigned char)42;
unsigned char var_13 = (unsigned char)166;
_Bool var_14 = (_Bool)1;
long long int var_16 = 1979713809831763387LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7648147532423399898LL;
unsigned char var_19 = (unsigned char)24;
long long int var_20 = 7253165015028247805LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
