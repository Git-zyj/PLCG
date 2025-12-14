#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
int var_1 = -1553998844;
unsigned int var_2 = 249493140U;
unsigned int var_3 = 4274596209U;
short var_4 = (short)17895;
unsigned long long int var_5 = 18218910161346936614ULL;
int var_10 = -1515032871;
int var_12 = 1478516527;
short var_14 = (short)30564;
short var_17 = (short)28408;
int zero = 0;
short var_20 = (short)-18075;
unsigned long long int var_21 = 6026340842564673359ULL;
short var_22 = (short)5195;
void init() {
}

void checksum() {
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
