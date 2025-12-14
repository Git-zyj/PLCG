#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -541125171;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)8889;
unsigned int var_7 = 2468705784U;
unsigned int var_9 = 2250214434U;
short var_14 = (short)23755;
int zero = 0;
signed char var_15 = (signed char)-35;
long long int var_16 = 4221915850461485028LL;
long long int var_17 = 8880368756883848737LL;
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
