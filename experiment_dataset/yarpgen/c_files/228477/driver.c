#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21218;
unsigned char var_7 = (unsigned char)70;
unsigned long long int var_11 = 17004604684827793114ULL;
unsigned short var_14 = (unsigned short)15715;
int zero = 0;
unsigned int var_20 = 427808395U;
unsigned int var_21 = 1750339842U;
signed char var_22 = (signed char)18;
unsigned char var_23 = (unsigned char)120;
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
