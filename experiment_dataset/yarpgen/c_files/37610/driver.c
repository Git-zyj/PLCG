#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-61;
short var_5 = (short)-7246;
short var_8 = (short)-10726;
int var_9 = -414005629;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-7966;
short var_17 = (short)6008;
int zero = 0;
unsigned long long int var_19 = 6530483170962838070ULL;
unsigned short var_20 = (unsigned short)59326;
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
