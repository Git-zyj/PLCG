#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned short var_3 = (unsigned short)14373;
signed char var_4 = (signed char)-97;
signed char var_5 = (signed char)-6;
unsigned long long int var_6 = 11755783343138507257ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)31;
short var_11 = (short)-14205;
int zero = 0;
signed char var_12 = (signed char)-11;
unsigned long long int var_13 = 2142940110110395671ULL;
unsigned int var_14 = 378212095U;
unsigned short var_15 = (unsigned short)60481;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
