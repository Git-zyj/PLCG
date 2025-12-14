#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7895871723210438794LL;
unsigned char var_10 = (unsigned char)126;
long long int var_11 = -4546807957458152793LL;
long long int var_13 = 349163827836423039LL;
unsigned int var_16 = 955099387U;
short var_17 = (short)-2535;
unsigned long long int var_18 = 15459119641911536697ULL;
unsigned short var_19 = (unsigned short)6968;
int zero = 0;
long long int var_20 = -2549281844738929219LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
