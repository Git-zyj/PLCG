#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned short var_1 = (unsigned short)59221;
signed char var_3 = (signed char)70;
unsigned long long int var_4 = 5802840440013891502ULL;
long long int var_6 = 2442040218780067477LL;
unsigned char var_7 = (unsigned char)134;
signed char var_8 = (signed char)82;
int var_9 = -1687472219;
_Bool var_10 = (_Bool)0;
long long int var_11 = -3596456824331733994LL;
int zero = 0;
unsigned char var_12 = (unsigned char)90;
signed char var_13 = (signed char)-36;
unsigned char var_14 = (unsigned char)81;
int var_15 = -589854464;
unsigned short var_16 = (unsigned short)29012;
unsigned short var_17 = (unsigned short)27291;
int var_18 = 1164776742;
unsigned int var_19 = 2673042078U;
unsigned long long int var_20 = 12873900492561023635ULL;
unsigned char var_21 = (unsigned char)102;
unsigned int var_22 = 2612191029U;
signed char var_23 = (signed char)-28;
int var_24 = -875500464;
unsigned long long int var_25 = 17923652190420219033ULL;
unsigned short arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
short arr_2 [24] [24] ;
int arr_3 [24] [24] [24] ;
unsigned short arr_5 [24] [24] [24] ;
unsigned int arr_6 [24] [24] [24] [24] ;
int arr_7 [10] [10] ;
long long int arr_8 [10] ;
int arr_17 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_20 [10] ;
unsigned short arr_23 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)7050;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2709933844U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2951;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 182567099;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)40790;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 534195653U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -1001584776;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -6091931021004678383LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1421969558;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 3216575900887262070ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46192 : (unsigned short)5237;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
