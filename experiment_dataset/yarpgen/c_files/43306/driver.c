#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7536435860973704210ULL;
unsigned short var_3 = (unsigned short)37055;
signed char var_5 = (signed char)29;
unsigned long long int var_8 = 3039464401389348610ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)13637;
unsigned long long int var_12 = 14592074401747126607ULL;
short var_13 = (short)11527;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
