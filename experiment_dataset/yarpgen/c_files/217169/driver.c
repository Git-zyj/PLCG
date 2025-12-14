#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)15;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 773881174U;
unsigned short var_6 = (unsigned short)57901;
unsigned char var_7 = (unsigned char)207;
unsigned int var_8 = 2395381982U;
long long int var_12 = -482047399156536907LL;
short var_13 = (short)-23881;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-106;
signed char var_16 = (signed char)-101;
unsigned short var_17 = (unsigned short)35477;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
