#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-17;
signed char var_3 = (signed char)-81;
unsigned char var_4 = (unsigned char)132;
short var_6 = (short)-23856;
unsigned char var_7 = (unsigned char)4;
long long int var_11 = 4918476149695338869LL;
long long int var_14 = 5772849749288816449LL;
int zero = 0;
unsigned long long int var_16 = 15222422636011131899ULL;
long long int var_17 = 1266429173417736132LL;
long long int var_18 = -3733620249448312821LL;
_Bool var_19 = (_Bool)1;
int var_20 = 1050297564;
unsigned int arr_5 [25] ;
unsigned long long int arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 1245923015U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 330868622703225279ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
