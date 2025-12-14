#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5424846584757973860ULL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-14098;
unsigned short var_4 = (unsigned short)30166;
unsigned char var_7 = (unsigned char)130;
unsigned char var_11 = (unsigned char)186;
int zero = 0;
unsigned int var_18 = 3627410233U;
unsigned char var_19 = (unsigned char)115;
short var_20 = (short)31194;
int var_21 = -315302736;
unsigned short var_22 = (unsigned short)42900;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
