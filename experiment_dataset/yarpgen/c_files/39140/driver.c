#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-115;
unsigned char var_3 = (unsigned char)230;
unsigned short var_4 = (unsigned short)62512;
unsigned int var_5 = 963205463U;
unsigned int var_7 = 2295105691U;
unsigned int var_8 = 2081363661U;
int var_9 = -8964696;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -788825587;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
