#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
signed char var_4 = (signed char)66;
short var_5 = (short)-17434;
short var_6 = (short)-10633;
_Bool var_7 = (_Bool)1;
short var_9 = (short)7894;
unsigned char var_10 = (unsigned char)154;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = 3089866953612247254LL;
signed char var_14 = (signed char)-61;
short var_15 = (short)-9624;
signed char var_16 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
