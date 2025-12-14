#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 180228209816428702LL;
short var_1 = (short)6563;
unsigned short var_3 = (unsigned short)62697;
signed char var_4 = (signed char)96;
unsigned char var_5 = (unsigned char)37;
long long int var_7 = -5665058132232120714LL;
short var_8 = (short)-13338;
signed char var_12 = (signed char)45;
int zero = 0;
short var_13 = (short)-18641;
long long int var_14 = -7028711407043733650LL;
unsigned long long int var_15 = 16287441356439219879ULL;
unsigned int var_16 = 752379947U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
