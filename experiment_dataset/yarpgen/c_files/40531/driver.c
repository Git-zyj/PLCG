#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 889429292U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 11213984767393795039ULL;
unsigned int var_17 = 2265395855U;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = -334615577;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
