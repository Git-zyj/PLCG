#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = -9100182938054513904LL;
short var_6 = (short)15010;
signed char var_15 = (signed char)-28;
int zero = 0;
unsigned short var_17 = (unsigned short)46175;
int var_18 = -531690504;
short var_19 = (short)17494;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
