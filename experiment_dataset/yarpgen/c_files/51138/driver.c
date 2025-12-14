#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21990;
long long int var_3 = -1767043037771966941LL;
unsigned short var_4 = (unsigned short)21128;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)15542;
int zero = 0;
unsigned short var_13 = (unsigned short)15239;
short var_14 = (short)21586;
short var_15 = (short)-10047;
unsigned short var_16 = (unsigned short)21724;
signed char var_17 = (signed char)-52;
short var_18 = (short)30855;
_Bool var_19 = (_Bool)1;
long long int var_20 = -134131950980554049LL;
unsigned char var_21 = (unsigned char)144;
int var_22 = -315111383;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-67;
signed char var_25 = (signed char)84;
signed char arr_0 [13] ;
long long int arr_1 [13] ;
signed char arr_2 [19] ;
unsigned long long int arr_4 [19] [19] ;
signed char arr_10 [19] [19] [19] [19] ;
signed char arr_11 [19] [19] ;
unsigned short arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -8063127029235841799LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 5788900246017962193ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-112 : (signed char)73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)57619 : (unsigned short)32721;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
