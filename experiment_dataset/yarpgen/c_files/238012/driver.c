#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned short var_1 = (unsigned short)30592;
_Bool var_2 = (_Bool)1;
short var_6 = (short)14407;
signed char var_9 = (signed char)76;
unsigned short var_12 = (unsigned short)51270;
signed char var_13 = (signed char)66;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-30041;
int zero = 0;
signed char var_19 = (signed char)18;
signed char var_20 = (signed char)-116;
short var_21 = (short)18239;
signed char var_22 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
