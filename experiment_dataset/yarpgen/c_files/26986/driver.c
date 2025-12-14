#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 6988262735038590427ULL;
short var_12 = (short)13029;
signed char var_18 = (signed char)-55;
int var_19 = -1508426229;
int zero = 0;
unsigned int var_20 = 3438466371U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9840818448148716010ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
