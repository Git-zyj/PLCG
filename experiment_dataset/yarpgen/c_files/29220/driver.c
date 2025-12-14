#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8067313116329675726LL;
signed char var_3 = (signed char)-99;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 771578982U;
signed char var_10 = (signed char)107;
unsigned char var_11 = (unsigned char)110;
unsigned short var_13 = (unsigned short)10237;
unsigned int var_17 = 2170123314U;
int zero = 0;
int var_18 = -1912900421;
unsigned char var_19 = (unsigned char)42;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
