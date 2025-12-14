#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1619441960501928093LL;
_Bool var_6 = (_Bool)0;
short var_13 = (short)12200;
signed char var_19 = (signed char)16;
int zero = 0;
signed char var_20 = (signed char)127;
unsigned int var_21 = 1199106734U;
unsigned long long int var_22 = 11470973497974466798ULL;
unsigned char var_23 = (unsigned char)175;
void init() {
}

void checksum() {
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
