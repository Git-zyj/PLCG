#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
long long int var_1 = 2342478919939506050LL;
unsigned long long int var_4 = 1546924996606340303ULL;
short var_5 = (short)5925;
unsigned short var_6 = (unsigned short)10586;
signed char var_7 = (signed char)-99;
_Bool var_8 = (_Bool)0;
long long int var_9 = 8174530521160071093LL;
unsigned short var_13 = (unsigned short)7765;
unsigned char var_15 = (unsigned char)83;
int var_16 = -804252474;
int var_18 = -749990583;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1143488161U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
int var_23 = -507738382;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
