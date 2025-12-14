#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)24;
unsigned long long int var_3 = 8690051889774417963ULL;
unsigned short var_4 = (unsigned short)59879;
unsigned long long int var_6 = 1764171815500531511ULL;
signed char var_8 = (signed char)-25;
unsigned long long int var_12 = 12796227022621747221ULL;
int zero = 0;
unsigned int var_14 = 2020803709U;
signed char var_15 = (signed char)40;
signed char var_16 = (signed char)-69;
int var_17 = 1064448372;
short var_18 = (short)-24060;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
