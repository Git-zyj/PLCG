#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1831922389;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)36445;
long long int var_3 = -1386198849611624258LL;
unsigned short var_4 = (unsigned short)60857;
unsigned long long int var_5 = 5745079772817138136ULL;
signed char var_6 = (signed char)65;
unsigned char var_7 = (unsigned char)202;
int var_8 = -675337732;
_Bool var_9 = (_Bool)0;
int var_10 = -297624315;
int zero = 0;
unsigned long long int var_12 = 5781854530542862321ULL;
signed char var_13 = (signed char)5;
unsigned short var_14 = (unsigned short)47461;
unsigned char var_15 = (unsigned char)158;
unsigned char var_16 = (unsigned char)177;
int var_17 = 231052922;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)56383;
unsigned long long int var_20 = 11460911892036390326ULL;
unsigned long long int var_21 = 14265774769370882761ULL;
unsigned int var_22 = 1890245344U;
int var_23 = 641197974;
unsigned long long int var_24 = 7831182828305057317ULL;
short var_25 = (short)20574;
int var_26 = 290128993;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)4024;
unsigned int var_31 = 850874849U;
signed char var_32 = (signed char)-7;
signed char arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
short arr_2 [17] ;
short arr_3 [17] ;
unsigned int arr_4 [17] [17] [17] ;
int arr_5 [17] [17] [17] ;
unsigned char arr_6 [17] ;
short arr_7 [17] [17] [17] [17] ;
unsigned short arr_8 [17] [17] [17] ;
unsigned char arr_10 [17] [17] [17] ;
unsigned short arr_14 [17] [17] [17] [17] [17] ;
long long int arr_24 [17] ;
_Bool arr_13 [17] [17] [17] [17] [17] [17] ;
unsigned short arr_20 [10] ;
unsigned char arr_21 [10] ;
unsigned short arr_25 [17] ;
int arr_28 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-4 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1193527312U : 2606539055U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-12693;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)21394 : (short)-22130;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1645010802U : 54658401U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1059451094;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-16355;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)39025 : (unsigned short)6641;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned short)43937 : (unsigned short)56373;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 1294675607613120415LL : 4525476514418055800LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (unsigned short)38762;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54204 : (unsigned short)14942;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = 1304423139;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
