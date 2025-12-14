#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -2014631818;
unsigned short var_4 = (unsigned short)48251;
signed char var_6 = (signed char)-101;
short var_9 = (short)8910;
unsigned long long int var_10 = 17278244275159289652ULL;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
short var_14 = (short)27773;
unsigned char var_15 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
