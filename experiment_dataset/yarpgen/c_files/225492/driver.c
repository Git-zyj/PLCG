#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
short var_1 = (short)-1606;
int var_2 = 163213197;
short var_3 = (short)13607;
signed char var_4 = (signed char)-13;
short var_5 = (short)-19290;
unsigned char var_6 = (unsigned char)21;
unsigned char var_7 = (unsigned char)121;
unsigned int var_8 = 3618657077U;
unsigned int var_10 = 2894804410U;
unsigned char var_11 = (unsigned char)158;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3507099106U;
signed char var_14 = (signed char)-97;
unsigned short var_15 = (unsigned short)63964;
unsigned char var_16 = (unsigned char)244;
short var_17 = (short)-27758;
unsigned long long int var_18 = 1077449973484827530ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)58757;
long long int var_21 = -2339389697964199933LL;
short var_22 = (short)-22155;
unsigned long long int var_23 = 3960197997769800891ULL;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)219;
unsigned char var_26 = (unsigned char)44;
unsigned short var_27 = (unsigned short)59768;
unsigned long long int var_28 = 14967734858298680595ULL;
unsigned long long int var_29 = 6555672422666846715ULL;
int arr_1 [14] ;
_Bool arr_2 [14] ;
unsigned char arr_3 [14] ;
unsigned int arr_5 [14] [14] ;
unsigned short arr_9 [22] ;
unsigned char arr_10 [22] ;
unsigned char arr_11 [22] ;
unsigned char arr_14 [22] [22] ;
signed char arr_15 [22] [22] [22] ;
int arr_16 [22] [22] [22] [22] ;
unsigned char arr_17 [22] [22] ;
signed char arr_21 [22] [22] [22] [22] [22] ;
unsigned short arr_26 [22] ;
signed char arr_36 [25] ;
int arr_37 [25] ;
_Bool arr_7 [14] ;
short arr_8 [14] ;
unsigned int arr_23 [22] ;
short arr_29 [22] [22] [22] [22] [22] ;
unsigned long long int arr_33 [22] ;
unsigned short arr_38 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -1729595621;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 72156332U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned short)46123;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)166 : (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1160146533;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44615 : (unsigned short)54099;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (signed char)-2 : (signed char)123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = -1327386422;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)-5930;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 912833965U : 2143889042U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (short)-6710 : (short)24618;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? 7921197840797725075ULL : 16019512500322231925ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45682 : (unsigned short)38726;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
