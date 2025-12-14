#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1475975052U;
signed char var_2 = (signed char)25;
short var_4 = (short)-17421;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2534965664U;
unsigned char var_14 = (unsigned char)181;
short var_16 = (short)-6703;
signed char var_17 = (signed char)-58;
int zero = 0;
int var_20 = -1988066017;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
