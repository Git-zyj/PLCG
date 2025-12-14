#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7690162276381366225LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-1546;
unsigned short var_5 = (unsigned short)9068;
signed char var_6 = (signed char)-83;
unsigned short var_11 = (unsigned short)12350;
int var_12 = -887036306;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-25693;
unsigned short var_17 = (unsigned short)41356;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
