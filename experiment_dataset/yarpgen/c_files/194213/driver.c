#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
long long int var_1 = 2940130161959583141LL;
unsigned long long int var_2 = 17528159082436406365ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 14913802454937208122ULL;
signed char var_7 = (signed char)90;
short var_8 = (short)-19711;
long long int var_9 = -3405205889889130743LL;
unsigned char var_10 = (unsigned char)32;
unsigned long long int var_11 = 13924321219132404200ULL;
signed char var_12 = (signed char)-120;
unsigned long long int var_13 = 11413182124137045556ULL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)21949;
short var_16 = (short)23008;
signed char var_17 = (signed char)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 9480007265887815121ULL;
short var_20 = (short)10837;
unsigned long long int var_21 = 9656155581669481068ULL;
unsigned int var_22 = 2346000362U;
unsigned int var_23 = 3456450579U;
signed char var_24 = (signed char)87;
short var_25 = (short)30215;
signed char var_26 = (signed char)117;
unsigned char var_27 = (unsigned char)26;
long long int var_28 = 5224532877860783656LL;
unsigned char var_29 = (unsigned char)125;
_Bool var_30 = (_Bool)0;
long long int var_31 = 2273932199488553590LL;
short var_32 = (short)-21689;
unsigned long long int var_33 = 18130313238303026050ULL;
signed char arr_10 [18] [18] ;
unsigned int arr_27 [18] [18] ;
unsigned long long int arr_32 [18] [18] [18] [18] ;
short arr_35 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = 1994348478U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 8801030193764736929ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = (short)-5203;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
