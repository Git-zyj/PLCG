#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1422986526;
int var_1 = 281810223;
unsigned char var_2 = (unsigned char)170;
unsigned int var_3 = 4282443590U;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)168;
long long int var_6 = 5766404611283593683LL;
unsigned char var_7 = (unsigned char)198;
unsigned char var_8 = (unsigned char)101;
int var_9 = 1999598797;
int zero = 0;
short var_10 = (short)-10379;
signed char var_11 = (signed char)112;
unsigned char var_12 = (unsigned char)250;
unsigned int var_13 = 1631029650U;
long long int var_14 = -3054790533023996756LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14780901631681436258ULL;
unsigned char var_17 = (unsigned char)89;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)29294;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5603522150416514336LL;
short var_22 = (short)19856;
short var_23 = (short)-11741;
unsigned short var_24 = (unsigned short)56378;
long long int var_25 = 2669302248222882042LL;
short var_26 = (short)21409;
unsigned char var_27 = (unsigned char)21;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-7778;
signed char var_30 = (signed char)-96;
unsigned short var_31 = (unsigned short)58734;
long long int var_32 = -1860471670458045342LL;
unsigned char var_33 = (unsigned char)215;
int var_34 = 1855911944;
unsigned short var_35 = (unsigned short)18374;
unsigned char var_36 = (unsigned char)23;
_Bool var_37 = (_Bool)0;
unsigned char var_38 = (unsigned char)111;
unsigned char var_39 = (unsigned char)127;
long long int arr_1 [25] ;
unsigned short arr_4 [25] [25] ;
unsigned char arr_7 [25] [25] [25] ;
signed char arr_8 [25] ;
_Bool arr_10 [25] [25] ;
unsigned long long int arr_19 [25] [25] [25] [25] ;
unsigned long long int arr_22 [25] [25] [25] ;
unsigned char arr_24 [25] [25] [25] ;
long long int arr_25 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_26 [25] [25] [25] [25] ;
unsigned long long int arr_29 [23] ;
long long int arr_33 [23] [23] [23] ;
short arr_40 [23] [23] [23] [23] [23] ;
short arr_67 [23] [23] [23] [23] [23] ;
signed char arr_68 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1610233942851671761LL : 4767886035952342408LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)20218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 6109688929296142698ULL : 6686611482713491266ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 6646869665530559321ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -3704371437919629737LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 1987375096U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_29 [i_0] = 16324905531574721894ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -3781321382288170295LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-17316 : (short)-32654;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-27382;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)91;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
