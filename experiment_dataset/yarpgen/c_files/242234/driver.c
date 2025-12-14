#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9736257049811916416ULL;
signed char var_6 = (signed char)-116;
long long int var_11 = -5497346913795708536LL;
unsigned short var_15 = (unsigned short)6769;
int zero = 0;
signed char var_20 = (signed char)-73;
short var_21 = (short)20213;
unsigned char var_22 = (unsigned char)39;
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
