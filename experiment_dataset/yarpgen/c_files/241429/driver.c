#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-62;
int var_4 = -98230047;
unsigned short var_9 = (unsigned short)65535;
short var_13 = (short)24609;
int var_14 = -402752311;
unsigned int var_16 = 1887524670U;
unsigned char var_18 = (unsigned char)230;
int var_19 = 1629104699;
int zero = 0;
short var_20 = (short)2408;
unsigned long long int var_21 = 15148464461999571281ULL;
signed char var_22 = (signed char)56;
int var_23 = -1344304628;
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
