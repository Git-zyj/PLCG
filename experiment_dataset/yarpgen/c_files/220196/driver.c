#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2106062877U;
unsigned short var_1 = (unsigned short)2161;
unsigned short var_2 = (unsigned short)55642;
unsigned short var_5 = (unsigned short)29083;
unsigned short var_9 = (unsigned short)27611;
unsigned long long int var_10 = 14186326978923640025ULL;
signed char var_11 = (signed char)0;
unsigned char var_13 = (unsigned char)83;
unsigned short var_14 = (unsigned short)12685;
unsigned short var_16 = (unsigned short)20216;
unsigned int var_17 = 2006195698U;
int zero = 0;
unsigned long long int var_18 = 7450758812153393669ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)19;
void init() {
}

void checksum() {
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
