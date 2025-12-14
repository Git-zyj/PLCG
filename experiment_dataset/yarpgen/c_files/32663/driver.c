#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17793;
int var_3 = 2107169583;
unsigned short var_5 = (unsigned short)65296;
unsigned short var_6 = (unsigned short)8525;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)114;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)55530;
long long int var_19 = -1179136828267510579LL;
short var_20 = (short)-28274;
long long int var_21 = 7976541981609351328LL;
unsigned char var_22 = (unsigned char)183;
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
