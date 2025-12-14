#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5269755771948754208LL;
signed char var_3 = (signed char)59;
short var_4 = (short)-10163;
unsigned long long int var_5 = 13918603413715296114ULL;
long long int var_7 = 8866554881168822799LL;
signed char var_9 = (signed char)64;
unsigned short var_10 = (unsigned short)5196;
int var_11 = -680447290;
long long int var_12 = -4959361048618458555LL;
int zero = 0;
unsigned char var_13 = (unsigned char)163;
unsigned char var_14 = (unsigned char)134;
signed char var_15 = (signed char)124;
short var_16 = (short)-30668;
unsigned short var_17 = (unsigned short)6942;
int var_18 = 55766994;
long long int var_19 = 4417358939997874947LL;
signed char var_20 = (signed char)-40;
short var_21 = (short)-27334;
signed char var_22 = (signed char)-46;
signed char var_23 = (signed char)4;
int var_24 = 725300075;
long long int var_25 = -6426271856713292951LL;
long long int var_26 = 6263503454349126211LL;
unsigned char var_27 = (unsigned char)213;
short var_28 = (short)3623;
short var_29 = (short)23334;
unsigned short var_30 = (unsigned short)49697;
short var_31 = (short)-30132;
_Bool var_32 = (_Bool)1;
int var_33 = 2095506250;
long long int var_34 = 6527900346570301196LL;
signed char var_35 = (signed char)-1;
int var_36 = -924811424;
_Bool var_37 = (_Bool)1;
long long int var_38 = 8794079088514411336LL;
unsigned long long int var_39 = 12011286749477786476ULL;
long long int arr_0 [22] ;
signed char arr_2 [22] ;
signed char arr_5 [22] [22] ;
long long int arr_6 [22] [22] ;
int arr_7 [22] ;
unsigned int arr_13 [10] [10] [10] ;
int arr_20 [10] [10] [10] [10] ;
long long int arr_26 [21] ;
unsigned int arr_29 [21] ;
_Bool arr_39 [21] [21] [21] [21] [21] ;
int arr_40 [21] ;
short arr_43 [21] [21] ;
long long int arr_53 [21] [21] ;
short arr_55 [21] [21] [21] [21] [21] ;
unsigned long long int arr_19 [10] [10] [10] [10] [10] ;
unsigned char arr_22 [10] [10] [10] [10] [10] [10] ;
short arr_23 [10] ;
signed char arr_24 [10] [10] ;
long long int arr_27 [21] ;
unsigned int arr_44 [21] [21] [21] [21] [21] ;
unsigned long long int arr_56 [21] ;
int arr_63 [21] [21] ;
short arr_64 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -7971185632731528411LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -440236868827700914LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 2052105999;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1551245970U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 1339888613;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = -6261786212716604071LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = 746497710U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = 503816469;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_43 [i_0] [i_1] = (short)12292;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_53 [i_0] [i_1] = 530251321620655254LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-13843;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 9313077756169834445ULL : 7747281904859707681ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)96 : (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = (short)26089;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -4941561419164938797LL : -1286092301021261777LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = 3428396500U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_56 [i_0] = 2928771446685271163ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_63 [i_0] [i_1] = -591333727;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = (short)-4446;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_63 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_64 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
