#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)124;
unsigned long long int var_2 = 17594113768028164324ULL;
signed char var_5 = (signed char)70;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17378196485680298747ULL;
int var_8 = -820045573;
unsigned char var_11 = (unsigned char)95;
short var_13 = (short)-13270;
unsigned int var_14 = 3640968867U;
int zero = 0;
unsigned char var_15 = (unsigned char)41;
unsigned char var_16 = (unsigned char)59;
unsigned long long int var_17 = 14710191379164436610ULL;
void init() {
}

void checksum() {
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
