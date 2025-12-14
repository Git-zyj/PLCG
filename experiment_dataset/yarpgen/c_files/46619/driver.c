#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15175;
long long int var_4 = -5227091570996021576LL;
long long int var_9 = 4762552328722033660LL;
int zero = 0;
short var_11 = (short)-31463;
long long int var_12 = -7777711017739160794LL;
unsigned char var_13 = (unsigned char)52;
long long int var_14 = 2177153830567028502LL;
long long int var_15 = 796003478832900525LL;
unsigned long long int var_16 = 1926978797098334502ULL;
short var_17 = (short)-15954;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
