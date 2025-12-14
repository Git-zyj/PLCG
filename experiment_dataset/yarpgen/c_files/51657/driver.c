#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34815;
short var_4 = (short)30819;
signed char var_5 = (signed char)-121;
unsigned short var_6 = (unsigned short)28687;
unsigned long long int var_7 = 7020857474872177095ULL;
unsigned int var_9 = 2136677966U;
signed char var_10 = (signed char)-25;
unsigned short var_12 = (unsigned short)44311;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
signed char var_16 = (signed char)101;
unsigned int var_17 = 999584827U;
unsigned short var_18 = (unsigned short)49312;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
