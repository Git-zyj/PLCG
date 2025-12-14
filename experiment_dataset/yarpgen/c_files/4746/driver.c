#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 2082680028U;
long long int var_4 = 1512642553201448546LL;
unsigned short var_5 = (unsigned short)60927;
unsigned short var_12 = (unsigned short)52633;
int zero = 0;
int var_14 = 1430555413;
signed char var_15 = (signed char)-113;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
