#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4893231598711082309LL;
short var_1 = (short)10605;
unsigned short var_8 = (unsigned short)6050;
long long int var_10 = 5657171746371006404LL;
unsigned short var_11 = (unsigned short)2087;
unsigned long long int var_12 = 7099671608205412530ULL;
int zero = 0;
signed char var_15 = (signed char)-60;
long long int var_16 = -2182288113625067973LL;
signed char var_17 = (signed char)-95;
short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)22607;
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
