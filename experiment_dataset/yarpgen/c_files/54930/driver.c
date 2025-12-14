#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)59;
unsigned short var_4 = (unsigned short)50941;
unsigned int var_5 = 3812513759U;
short var_6 = (short)5891;
signed char var_11 = (signed char)-65;
signed char var_13 = (signed char)0;
signed char var_16 = (signed char)19;
int zero = 0;
short var_18 = (short)-388;
unsigned int var_19 = 2271548073U;
short var_20 = (short)11465;
int var_21 = -1934496320;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
