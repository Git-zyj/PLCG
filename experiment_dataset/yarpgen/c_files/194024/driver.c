#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16373392670488600919ULL;
unsigned long long int var_7 = 1600455460960895497ULL;
unsigned short var_8 = (unsigned short)17054;
unsigned long long int var_12 = 4008522056246629219ULL;
unsigned short var_14 = (unsigned short)10813;
int zero = 0;
unsigned long long int var_19 = 12152164038692454473ULL;
unsigned long long int var_20 = 9088676446286741007ULL;
unsigned long long int var_21 = 17328148822880079317ULL;
unsigned short var_22 = (unsigned short)63812;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
