#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3017139595U;
long long int var_2 = -1198177252017093030LL;
unsigned int var_4 = 2296895201U;
unsigned int var_5 = 3901021160U;
long long int var_7 = 5150096950281729937LL;
unsigned int var_11 = 2471958827U;
unsigned char var_13 = (unsigned char)192;
long long int var_15 = -8641066330775613287LL;
unsigned int var_16 = 2050232791U;
unsigned int var_18 = 576835340U;
unsigned int var_19 = 2672723883U;
int zero = 0;
signed char var_20 = (signed char)65;
unsigned char var_21 = (unsigned char)94;
unsigned int var_22 = 2454953242U;
void init() {
}

void checksum() {
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
