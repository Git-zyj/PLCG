#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
int var_3 = 1089807419;
long long int var_4 = -2252207667587040500LL;
unsigned char var_5 = (unsigned char)48;
unsigned long long int var_11 = 3319661041496232599ULL;
signed char var_13 = (signed char)-92;
short var_14 = (short)5877;
long long int var_16 = 4129760761288064435LL;
int zero = 0;
unsigned long long int var_17 = 9837343801231117957ULL;
unsigned long long int var_18 = 1508384318432138124ULL;
short var_19 = (short)-11712;
unsigned int var_20 = 793328185U;
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
