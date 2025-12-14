#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
signed char var_1 = (signed char)16;
long long int var_2 = 6695749316261695439LL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)3730;
unsigned char var_7 = (unsigned char)85;
int var_9 = -76535758;
long long int var_10 = 3266052923961534519LL;
signed char var_15 = (signed char)-112;
unsigned int var_17 = 3671774642U;
unsigned short var_19 = (unsigned short)33410;
int zero = 0;
unsigned char var_20 = (unsigned char)28;
signed char var_21 = (signed char)37;
signed char var_22 = (signed char)-92;
unsigned short var_23 = (unsigned short)17140;
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
