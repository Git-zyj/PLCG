#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
short var_2 = (short)-9649;
unsigned char var_4 = (unsigned char)223;
unsigned char var_6 = (unsigned char)231;
long long int var_7 = 459127364764108604LL;
unsigned char var_8 = (unsigned char)119;
unsigned char var_10 = (unsigned char)230;
unsigned char var_15 = (unsigned char)34;
short var_16 = (short)-23677;
long long int var_18 = -9165849946778749424LL;
int zero = 0;
unsigned char var_20 = (unsigned char)81;
unsigned char var_21 = (unsigned char)242;
_Bool var_22 = (_Bool)0;
long long int var_23 = -4803053544694513707LL;
void init() {
}

void checksum() {
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
