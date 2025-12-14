#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 2605303904844798365LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-23;
short var_6 = (short)-6061;
signed char var_7 = (signed char)89;
unsigned short var_9 = (unsigned short)57077;
int zero = 0;
long long int var_10 = -3161808529154519381LL;
short var_11 = (short)29709;
unsigned int var_12 = 1516417374U;
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
