#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4693908398541016960LL;
short var_1 = (short)6714;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)12935;
short var_5 = (short)16895;
long long int var_8 = 6773859207709825446LL;
int zero = 0;
signed char var_10 = (signed char)51;
unsigned short var_11 = (unsigned short)17997;
unsigned int var_12 = 84111270U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
