#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)86;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-120;
unsigned long long int var_7 = 10404229477878233156ULL;
short var_8 = (short)25807;
_Bool var_9 = (_Bool)1;
long long int var_11 = 3788308422852913269LL;
int zero = 0;
short var_15 = (short)17867;
long long int var_16 = -3812751200182792541LL;
short var_17 = (short)3960;
long long int var_18 = 1786379423305232807LL;
unsigned long long int var_19 = 8782743582707376156ULL;
unsigned long long int arr_1 [15] ;
int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 17935594066124583239ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 1152564076;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
