#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned int var_4 = 186428371U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)204;
unsigned char var_14 = (unsigned char)1;
unsigned long long int var_15 = 6908854278417425455ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-123;
int zero = 0;
long long int var_19 = -8030266255584430020LL;
short var_20 = (short)2303;
unsigned int var_21 = 2972303050U;
int var_22 = 1294815286;
unsigned char var_23 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
