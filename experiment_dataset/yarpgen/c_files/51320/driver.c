#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 4649180671899480925ULL;
short var_8 = (short)-6195;
unsigned int var_10 = 4011404117U;
short var_11 = (short)1151;
_Bool var_16 = (_Bool)0;
unsigned char var_19 = (unsigned char)61;
int zero = 0;
unsigned short var_20 = (unsigned short)9064;
int var_21 = 2003895315;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3983620245U;
unsigned char var_24 = (unsigned char)8;
signed char arr_0 [18] ;
unsigned int arr_1 [18] ;
int arr_4 [18] [18] [18] ;
unsigned int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2405381368U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1689907868;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3604451045U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
