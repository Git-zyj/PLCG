#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned short var_1 = (unsigned short)3867;
unsigned char var_3 = (unsigned char)188;
signed char var_4 = (signed char)8;
unsigned long long int var_5 = 4599021233668078491ULL;
unsigned char var_6 = (unsigned char)182;
unsigned int var_8 = 1468707191U;
int var_9 = 1234804022;
int var_10 = 1293094903;
signed char var_11 = (signed char)-63;
unsigned long long int var_13 = 2131287537697257318ULL;
unsigned char var_14 = (unsigned char)33;
int var_16 = 1558982642;
unsigned long long int var_17 = 391107969969368065ULL;
unsigned long long int var_19 = 11232731460138341315ULL;
int zero = 0;
unsigned long long int var_20 = 14766068627903889049ULL;
signed char var_21 = (signed char)117;
short var_22 = (short)5567;
int var_23 = -1450375446;
signed char var_24 = (signed char)-23;
signed char var_25 = (signed char)-60;
unsigned long long int var_26 = 6973908958375911067ULL;
int var_27 = -449527132;
unsigned long long int var_28 = 6640510536009407212ULL;
signed char var_29 = (signed char)-45;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1539606699U;
unsigned long long int var_32 = 711440367279399477ULL;
unsigned char var_33 = (unsigned char)223;
int var_34 = -1298624523;
unsigned char var_35 = (unsigned char)102;
unsigned long long int arr_0 [10] ;
int arr_3 [10] ;
signed char arr_6 [10] [10] ;
signed char arr_13 [17] ;
unsigned int arr_14 [17] ;
signed char arr_16 [18] ;
int arr_29 [18] [18] [18] [18] ;
int arr_11 [10] ;
int arr_12 [10] [10] ;
unsigned short arr_32 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 16430197196870126702ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1001686214;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 1905160556U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -1090000580;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 1914067974;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 1971037852;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = (unsigned short)18597;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
