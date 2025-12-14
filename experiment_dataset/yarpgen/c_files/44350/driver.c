#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
unsigned short var_2 = (unsigned short)37705;
unsigned long long int var_7 = 13803235806061780026ULL;
unsigned int var_8 = 1619054756U;
unsigned long long int var_10 = 1198396592125713707ULL;
unsigned short var_11 = (unsigned short)17789;
unsigned short var_12 = (unsigned short)23199;
int zero = 0;
short var_14 = (short)-4204;
unsigned int var_15 = 3085685664U;
signed char var_16 = (signed char)-92;
signed char var_17 = (signed char)8;
int var_18 = 221875195;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
