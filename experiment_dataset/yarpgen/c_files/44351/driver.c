#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
_Bool var_2 = (_Bool)0;
short var_4 = (short)30342;
unsigned int var_5 = 1850071011U;
unsigned int var_6 = 2990704109U;
int zero = 0;
unsigned int var_11 = 2120608664U;
long long int var_12 = 3024317671089678265LL;
unsigned char var_13 = (unsigned char)222;
int var_14 = -993798891;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
