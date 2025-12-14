#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46049;
int var_1 = -780892361;
short var_5 = (short)-11427;
unsigned long long int var_8 = 17353591711981715951ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 351907448312550311ULL;
short var_14 = (short)11038;
int zero = 0;
long long int var_15 = -8705654289715418511LL;
unsigned int var_16 = 3552315692U;
unsigned long long int var_17 = 16998690467591373977ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
