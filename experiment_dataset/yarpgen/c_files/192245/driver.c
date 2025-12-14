#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 549538286224871191LL;
unsigned char var_1 = (unsigned char)37;
unsigned int var_2 = 1672720357U;
int var_3 = -789524507;
short var_4 = (short)-11888;
long long int var_5 = 9058703147340170152LL;
unsigned int var_6 = 1729101710U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)105;
unsigned char var_9 = (unsigned char)154;
long long int var_12 = -6510746663211318765LL;
int var_13 = -638747311;
unsigned short var_14 = (unsigned short)56;
int var_15 = 468053134;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2546306545U;
int zero = 0;
unsigned char var_18 = (unsigned char)11;
unsigned char var_19 = (unsigned char)188;
int var_20 = -2100454400;
long long int var_21 = 9094561301976326196LL;
short var_22 = (short)-18041;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)68;
unsigned char var_25 = (unsigned char)209;
unsigned char var_26 = (unsigned char)145;
int var_27 = -788762379;
short var_28 = (short)9652;
unsigned short var_29 = (unsigned short)25620;
long long int var_30 = 4541852506548386412LL;
short var_31 = (short)-25074;
unsigned char var_32 = (unsigned char)212;
short var_33 = (short)9256;
int var_34 = -172875085;
long long int var_35 = 138519996488107599LL;
unsigned short arr_1 [22] ;
short arr_2 [22] [22] [22] ;
signed char arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
short arr_5 [22] [22] [22] ;
long long int arr_7 [22] ;
unsigned short arr_8 [22] ;
signed char arr_9 [22] ;
unsigned long long int arr_13 [22] [22] [22] [22] [22] ;
short arr_18 [22] ;
unsigned char arr_30 [22] [22] ;
unsigned char arr_14 [22] ;
short arr_15 [22] [22] [22] [22] [22] ;
short arr_19 [22] ;
short arr_31 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)20339;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-10906;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1944208075U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-23923;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -7498530657724661212LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)1093;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 898708165398621988ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (short)-27080;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-20415;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (short)-23756;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (short)-18781;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
