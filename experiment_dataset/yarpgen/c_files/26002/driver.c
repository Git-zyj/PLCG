#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5420202737183782856LL;
signed char var_1 = (signed char)7;
unsigned long long int var_4 = 2464211632872684774ULL;
unsigned int var_9 = 3686822806U;
int var_10 = 711313228;
unsigned char var_11 = (unsigned char)225;
unsigned int var_12 = 1455518243U;
int zero = 0;
unsigned int var_15 = 2480072389U;
long long int var_16 = -6052669515493000551LL;
long long int var_17 = 6961748483439488123LL;
unsigned short var_18 = (unsigned short)29349;
unsigned int var_19 = 3505382819U;
signed char var_20 = (signed char)100;
unsigned int var_21 = 4121353115U;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1144277835U;
unsigned short var_24 = (unsigned short)63184;
long long int var_25 = -1293159503732055946LL;
long long int var_26 = 5493508035474963629LL;
int var_27 = -1970297961;
signed char var_28 = (signed char)-21;
unsigned long long int var_29 = 5138683747676669433ULL;
long long int var_30 = -4135680770954905876LL;
long long int var_31 = -5852841936899771582LL;
unsigned int var_32 = 1479520350U;
signed char var_33 = (signed char)118;
unsigned int var_34 = 3658305927U;
signed char arr_0 [14] ;
unsigned long long int arr_1 [14] ;
long long int arr_2 [14] ;
unsigned int arr_5 [19] ;
signed char arr_6 [19] ;
unsigned int arr_7 [19] ;
long long int arr_8 [19] [19] [19] ;
unsigned short arr_10 [19] ;
int arr_11 [19] ;
signed char arr_12 [19] [19] [19] [19] ;
long long int arr_14 [19] [19] [19] ;
unsigned int arr_15 [19] [19] [19] [19] [19] ;
unsigned char arr_16 [19] [19] [19] [19] [19] ;
unsigned int arr_17 [19] [19] [19] [19] [19] ;
unsigned int arr_19 [19] [19] [19] ;
signed char arr_22 [18] ;
unsigned short arr_25 [18] ;
long long int arr_36 [18] ;
int arr_3 [14] ;
unsigned long long int arr_24 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6459171809938002638ULL : 11930458077155422196ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7790670037775182951LL : -9015504260339100437LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 124771296U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3714012910U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 4931489522504194312LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55489 : (unsigned short)12515;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -91656142;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -7880090848951447594LL : 93812399894198149LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 855798059U : 1350678512U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1234650943U : 2839618093U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 606276063U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (unsigned short)58924;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 8992887394838243265LL : 584543163413168477LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1736056019 : 2115634371;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = 2515186495139851969ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
