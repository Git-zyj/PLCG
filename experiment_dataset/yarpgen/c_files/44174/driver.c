#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
short var_2 = (short)-6958;
long long int var_5 = -7555045150171367500LL;
unsigned char var_6 = (unsigned char)29;
signed char var_8 = (signed char)-113;
unsigned char var_11 = (unsigned char)155;
int zero = 0;
unsigned long long int var_14 = 6288891182057190151ULL;
signed char var_15 = (signed char)7;
unsigned long long int var_16 = 11580452869471272156ULL;
unsigned int var_17 = 2059135430U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
