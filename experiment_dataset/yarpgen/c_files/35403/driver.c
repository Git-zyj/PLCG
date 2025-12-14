#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 754405502227289294LL;
unsigned long long int var_1 = 10253426915885760099ULL;
unsigned long long int var_3 = 2871162069683489790ULL;
unsigned char var_6 = (unsigned char)57;
unsigned char var_9 = (unsigned char)149;
unsigned int var_13 = 1741918655U;
unsigned short var_14 = (unsigned short)35925;
int zero = 0;
unsigned long long int var_15 = 1488070753752889340ULL;
unsigned short var_16 = (unsigned short)40719;
unsigned int var_17 = 2008155281U;
unsigned char var_18 = (unsigned char)253;
signed char var_19 = (signed char)71;
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
