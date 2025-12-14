#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1105089618610485656ULL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-26262;
unsigned int var_7 = 3926030688U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 4169585284747151446ULL;
unsigned long long int var_12 = 14966427349337825106ULL;
int zero = 0;
short var_14 = (short)13508;
unsigned long long int var_15 = 10049461241700029289ULL;
short var_16 = (short)11847;
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
