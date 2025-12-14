#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
long long int var_4 = -939314910212992143LL;
unsigned short var_6 = (unsigned short)1524;
long long int var_7 = -2608430917053240443LL;
int var_10 = 1780887609;
signed char var_15 = (signed char)-36;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)58;
int var_19 = -1647578764;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3343526169U;
void init() {
}

void checksum() {
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
