#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54256;
_Bool var_4 = (_Bool)0;
int var_6 = -990766129;
unsigned long long int var_9 = 15032668720197309732ULL;
int var_10 = 1486240354;
unsigned short var_13 = (unsigned short)39504;
int zero = 0;
short var_16 = (short)-16739;
short var_17 = (short)897;
unsigned long long int var_18 = 4633392639972222024ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
