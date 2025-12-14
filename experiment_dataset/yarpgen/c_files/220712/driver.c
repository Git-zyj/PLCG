#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
unsigned short var_5 = (unsigned short)47045;
_Bool var_6 = (_Bool)1;
unsigned char var_11 = (unsigned char)55;
short var_15 = (short)-31103;
int zero = 0;
short var_17 = (short)25796;
unsigned char var_18 = (unsigned char)165;
unsigned char var_19 = (unsigned char)205;
unsigned long long int var_20 = 6940846106747448617ULL;
int var_21 = 207590092;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
