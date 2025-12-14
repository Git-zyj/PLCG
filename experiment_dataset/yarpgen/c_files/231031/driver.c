#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15546;
unsigned long long int var_4 = 9598823878175600325ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1138191188U;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
unsigned char var_18 = (unsigned char)45;
unsigned short var_19 = (unsigned short)63387;
unsigned long long int var_20 = 14641580307995221693ULL;
unsigned long long int var_21 = 3732404431546748107ULL;
unsigned char var_22 = (unsigned char)66;
signed char var_23 = (signed char)-95;
long long int var_24 = 2574142313495229344LL;
unsigned char var_25 = (unsigned char)98;
unsigned int var_26 = 2070828085U;
unsigned short var_27 = (unsigned short)27124;
long long int arr_1 [16] ;
unsigned int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -3661673330253550878LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 4156535820U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 15411330332886594705ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
