#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3528482437U;
unsigned short var_2 = (unsigned short)18139;
unsigned short var_4 = (unsigned short)56907;
unsigned short var_7 = (unsigned short)64517;
short var_8 = (short)25973;
long long int var_10 = 5840803703160313214LL;
signed char var_12 = (signed char)2;
int var_13 = 21041310;
int zero = 0;
short var_14 = (short)15901;
int var_15 = 1049749537;
unsigned char var_16 = (unsigned char)219;
int var_17 = 2140206494;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
