#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9089152024452287274ULL;
int var_5 = -1646278232;
int var_9 = -634874597;
unsigned short var_10 = (unsigned short)40259;
signed char var_11 = (signed char)-124;
int zero = 0;
unsigned short var_13 = (unsigned short)55603;
unsigned short var_14 = (unsigned short)57590;
void init() {
}

void checksum() {
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
