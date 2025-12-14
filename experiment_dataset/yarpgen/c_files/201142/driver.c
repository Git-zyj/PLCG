#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35321;
long long int var_1 = -8069126481568479756LL;
unsigned short var_3 = (unsigned short)40053;
signed char var_4 = (signed char)99;
int var_5 = -222536511;
_Bool var_8 = (_Bool)1;
int var_9 = 136504224;
long long int var_10 = 1455853775303227025LL;
int zero = 0;
signed char var_11 = (signed char)41;
short var_12 = (short)12355;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
