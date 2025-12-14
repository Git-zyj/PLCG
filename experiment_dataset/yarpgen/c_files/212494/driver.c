#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)43;
long long int var_4 = -4636056301280620313LL;
unsigned short var_6 = (unsigned short)15235;
unsigned short var_9 = (unsigned short)5077;
unsigned long long int var_10 = 11404164364736853248ULL;
unsigned long long int var_12 = 17651817192285407169ULL;
int var_16 = -40341134;
signed char var_17 = (signed char)-118;
int zero = 0;
unsigned short var_19 = (unsigned short)35230;
unsigned int var_20 = 3560023650U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
