#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2250585139U;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-15;
unsigned int var_11 = 3649027001U;
int zero = 0;
signed char var_15 = (signed char)81;
unsigned int var_16 = 3676417674U;
int var_17 = -1399108549;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3375240194U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
