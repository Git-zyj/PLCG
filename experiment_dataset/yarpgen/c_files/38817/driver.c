#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15082;
long long int var_2 = 457767413711478760LL;
long long int var_4 = 7070087671161874850LL;
short var_7 = (short)16301;
_Bool var_9 = (_Bool)1;
short var_13 = (short)-4707;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -761689082;
signed char var_17 = (signed char)73;
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
