#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2236;
unsigned int var_3 = 3166673943U;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-124;
long long int var_8 = 7971388879194046138LL;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-100;
int zero = 0;
unsigned int var_13 = 852300279U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
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
