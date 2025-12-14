#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3381558899303082661ULL;
unsigned short var_5 = (unsigned short)15976;
unsigned long long int var_7 = 3974359917803242892ULL;
unsigned char var_15 = (unsigned char)173;
int zero = 0;
unsigned long long int var_20 = 14509465862206390708ULL;
long long int var_21 = 718882891924904299LL;
unsigned int var_22 = 2478811682U;
short var_23 = (short)-30599;
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
