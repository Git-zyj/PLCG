#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28937;
unsigned short var_3 = (unsigned short)35464;
unsigned long long int var_4 = 7477267829351479166ULL;
unsigned short var_11 = (unsigned short)13342;
int zero = 0;
unsigned long long int var_13 = 13847384238570639565ULL;
unsigned int var_14 = 3862714508U;
unsigned int var_15 = 2978230351U;
signed char var_16 = (signed char)107;
short var_17 = (short)9912;
int var_18 = 1485082757;
signed char var_19 = (signed char)65;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1845214413U : 2650737307U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
