#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2219918443U;
unsigned short var_3 = (unsigned short)51173;
unsigned char var_4 = (unsigned char)67;
unsigned int var_5 = 404328455U;
short var_6 = (short)12129;
short var_7 = (short)2304;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)3871;
unsigned char var_11 = (unsigned char)210;
unsigned short var_12 = (unsigned short)57801;
long long int var_15 = -7870317127643501559LL;
short var_16 = (short)-29063;
unsigned short var_18 = (unsigned short)39626;
int zero = 0;
unsigned char var_20 = (unsigned char)89;
unsigned char var_21 = (unsigned char)64;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)56;
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
