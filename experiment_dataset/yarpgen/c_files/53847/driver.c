#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
int var_3 = 1071281893;
signed char var_5 = (signed char)-107;
signed char var_6 = (signed char)84;
unsigned char var_7 = (unsigned char)213;
unsigned short var_8 = (unsigned short)1779;
int var_10 = -1149255412;
long long int var_11 = -2282570345043117766LL;
short var_12 = (short)24410;
short var_13 = (short)-26605;
int zero = 0;
signed char var_17 = (signed char)-125;
short var_18 = (short)-3729;
unsigned int var_19 = 547076508U;
signed char var_20 = (signed char)127;
signed char var_21 = (signed char)-65;
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
