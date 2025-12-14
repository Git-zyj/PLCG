#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29075;
long long int var_1 = -8296080441981408366LL;
short var_3 = (short)17415;
unsigned long long int var_4 = 12877419116206687853ULL;
unsigned char var_7 = (unsigned char)12;
long long int var_9 = 4391203943709064113LL;
unsigned short var_11 = (unsigned short)30590;
short var_12 = (short)13171;
unsigned long long int var_13 = 16518135478412632837ULL;
unsigned char var_15 = (unsigned char)97;
int zero = 0;
short var_16 = (short)-11844;
short var_17 = (short)8676;
unsigned long long int var_18 = 18266819821018299674ULL;
int var_19 = -1133141358;
long long int var_20 = -4831126599231408070LL;
unsigned long long int var_21 = 12887613960949456689ULL;
short var_22 = (short)-10564;
short arr_0 [13] ;
short arr_5 [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] ;
short arr_12 [13] ;
short arr_13 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-17877;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)28547;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 11483340948955269458ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (short)4865;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)12294;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
