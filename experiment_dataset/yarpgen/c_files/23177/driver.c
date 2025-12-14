#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3470712121U;
short var_1 = (short)16580;
_Bool var_2 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_11 = -744967472;
unsigned int var_14 = 434730492U;
unsigned int var_18 = 2638362289U;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-9910;
short var_21 = (short)29768;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
