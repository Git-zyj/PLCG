#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-41;
unsigned char var_5 = (unsigned char)86;
unsigned int var_7 = 1096270487U;
unsigned long long int var_9 = 5102042442278492603ULL;
unsigned long long int var_11 = 1657215378117626238ULL;
int var_15 = 425168858;
unsigned char var_16 = (unsigned char)30;
unsigned char var_17 = (unsigned char)222;
int zero = 0;
unsigned short var_20 = (unsigned short)723;
signed char var_21 = (signed char)113;
unsigned char var_22 = (unsigned char)32;
_Bool var_23 = (_Bool)1;
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
