#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)175;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)0;
unsigned int var_11 = 3594123767U;
short var_12 = (short)-11369;
unsigned long long int var_13 = 14965917429465872446ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)186;
unsigned char var_15 = (unsigned char)17;
short var_16 = (short)20764;
long long int var_17 = -6515354121462380582LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
