#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5129;
signed char var_2 = (signed char)-76;
short var_5 = (short)31429;
unsigned long long int var_7 = 2528847270917471785ULL;
unsigned char var_10 = (unsigned char)148;
unsigned short var_13 = (unsigned short)27607;
signed char var_14 = (signed char)40;
int var_15 = 469400698;
int zero = 0;
unsigned char var_17 = (unsigned char)231;
unsigned int var_18 = 540139813U;
unsigned long long int var_19 = 6078801071681794133ULL;
unsigned int var_20 = 2408553852U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
