#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)108;
int var_3 = 565449223;
short var_5 = (short)-16026;
signed char var_6 = (signed char)-108;
unsigned short var_8 = (unsigned short)28109;
unsigned char var_11 = (unsigned char)117;
signed char var_12 = (signed char)96;
signed char var_13 = (signed char)95;
int var_14 = 1182332763;
short var_16 = (short)-11074;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
unsigned int var_18 = 848038559U;
unsigned int var_19 = 2079880723U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)8136;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
