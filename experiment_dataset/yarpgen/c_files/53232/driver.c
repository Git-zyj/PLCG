#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31066;
long long int var_8 = -8061701231065379999LL;
unsigned int var_11 = 84931941U;
short var_12 = (short)30195;
unsigned int var_16 = 289501010U;
short var_18 = (short)-6732;
int zero = 0;
long long int var_20 = -8845396368125482744LL;
signed char var_21 = (signed char)-115;
unsigned char var_22 = (unsigned char)86;
long long int var_23 = -988313848251245303LL;
short var_24 = (short)15262;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
