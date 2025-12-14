#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)229;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-89;
unsigned short var_4 = (unsigned short)26541;
unsigned char var_5 = (unsigned char)175;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 16092102486339530160ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-9420;
int zero = 0;
long long int var_13 = -4008523086807047601LL;
signed char var_14 = (signed char)-64;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)230;
long long int var_17 = -2093610580963539571LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-59;
unsigned long long int var_20 = 15255551560294226471ULL;
signed char var_21 = (signed char)112;
long long int var_22 = 8140991104378972058LL;
unsigned long long int var_23 = 10043443248219654455ULL;
_Bool var_24 = (_Bool)1;
long long int var_25 = -89684001715724622LL;
long long int arr_0 [19] ;
_Bool arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned short arr_5 [19] ;
unsigned short arr_6 [19] [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
signed char arr_9 [24] ;
short arr_10 [24] [24] ;
int arr_12 [24] [24] ;
unsigned char arr_13 [24] [24] ;
signed char arr_14 [24] ;
unsigned int arr_17 [20] [20] ;
_Bool arr_18 [20] [20] [20] ;
long long int arr_19 [20] ;
unsigned long long int arr_21 [20] ;
unsigned short arr_23 [20] [20] [20] [20] [20] [20] ;
unsigned char arr_24 [20] ;
signed char arr_11 [24] ;
long long int arr_25 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 903985126481617957LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)46444;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)17236;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)24837;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2999794837697173343ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (short)20064;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 21048502;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = 494657016U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 7615713005654965569LL : -6104205875859956603LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 4712298126010877844ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)34529;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -7954179444986102705LL : 8507813953688003149LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
