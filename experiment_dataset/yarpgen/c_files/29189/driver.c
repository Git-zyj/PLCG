#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)141;
signed char var_3 = (signed char)52;
unsigned char var_7 = (unsigned char)49;
unsigned short var_8 = (unsigned short)53087;
short var_9 = (short)6554;
unsigned short var_10 = (unsigned short)17376;
unsigned short var_11 = (unsigned short)21602;
int var_12 = -750769607;
short var_13 = (short)31670;
int zero = 0;
unsigned int var_14 = 2291686181U;
unsigned long long int var_15 = 5320067208444966597ULL;
unsigned short var_16 = (unsigned short)55643;
signed char var_17 = (signed char)-45;
unsigned char var_18 = (unsigned char)182;
signed char var_19 = (signed char)-31;
unsigned char var_20 = (unsigned char)74;
short var_21 = (short)-2371;
int var_22 = 1634454295;
unsigned char var_23 = (unsigned char)80;
short var_24 = (short)27320;
unsigned long long int var_25 = 3500172980219431489ULL;
unsigned int var_26 = 3639231918U;
unsigned short var_27 = (unsigned short)39795;
short var_28 = (short)1930;
signed char var_29 = (signed char)126;
short var_30 = (short)21019;
unsigned char var_31 = (unsigned char)202;
unsigned char var_32 = (unsigned char)28;
signed char var_33 = (signed char)-7;
unsigned char var_34 = (unsigned char)2;
unsigned char var_35 = (unsigned char)46;
unsigned long long int var_36 = 7964174548520754226ULL;
unsigned long long int var_37 = 8240107484350492949ULL;
unsigned int var_38 = 2388095248U;
signed char var_39 = (signed char)-29;
unsigned long long int var_40 = 6623639545471926999ULL;
signed char arr_0 [10] ;
short arr_1 [10] ;
unsigned long long int arr_2 [10] ;
unsigned short arr_3 [10] [10] ;
unsigned char arr_4 [10] [10] [10] ;
short arr_5 [10] ;
unsigned long long int arr_16 [10] [10] [10] [10] [10] ;
signed char arr_17 [10] [10] [10] [10] [10] ;
unsigned long long int arr_19 [10] [10] [10] [10] [10] [10] ;
long long int arr_30 [13] ;
short arr_31 [13] ;
unsigned int arr_32 [25] ;
unsigned int arr_34 [25] ;
unsigned char arr_35 [25] ;
unsigned short arr_36 [25] ;
unsigned long long int arr_38 [25] [25] ;
unsigned short arr_40 [25] [25] [25] [25] ;
unsigned short arr_42 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-10224;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 5852968604718646708ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)39404;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)26886;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 6309719944887991505ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 15358764768293208611ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = 2197829586542720614LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (short)-32138;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = 3255815605U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = 923557746U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = (unsigned short)59126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = 14764169946063648622ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8367;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = (unsigned short)57749;
}

void checksum() {
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
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
