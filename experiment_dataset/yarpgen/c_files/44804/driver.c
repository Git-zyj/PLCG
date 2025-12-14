#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 604788066U;
signed char var_2 = (signed char)4;
int var_5 = 468509157;
unsigned short var_6 = (unsigned short)19067;
unsigned char var_7 = (unsigned char)210;
unsigned int var_8 = 2004589100U;
int var_9 = 812257795;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)71;
signed char var_19 = (signed char)-88;
int var_20 = 151530445;
void init() {
}

void checksum() {
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
