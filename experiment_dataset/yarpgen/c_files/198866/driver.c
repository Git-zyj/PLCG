#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)-22052;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2499739251U;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-23876;
short var_11 = (short)16395;
unsigned char var_13 = (unsigned char)238;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-34;
int zero = 0;
int var_19 = -208598330;
unsigned int var_20 = 3599810565U;
short var_21 = (short)-12397;
unsigned int var_22 = 3397898578U;
unsigned int var_23 = 1328171484U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
