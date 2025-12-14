#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 23743876899288167LL;
signed char var_4 = (signed char)-66;
unsigned long long int var_6 = 8675531365957478185ULL;
short var_11 = (short)-28174;
long long int var_13 = -17488615353877814LL;
unsigned char var_15 = (unsigned char)237;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1708722639U;
unsigned long long int var_19 = 9720701436289813858ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)15101;
long long int var_22 = -912840340798034499LL;
signed char var_23 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
