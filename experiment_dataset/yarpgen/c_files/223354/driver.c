#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46689;
unsigned int var_1 = 283684732U;
short var_2 = (short)-9993;
unsigned short var_3 = (unsigned short)63605;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)54686;
long long int var_8 = -923606624899177000LL;
short var_9 = (short)31749;
unsigned int var_10 = 2832191777U;
unsigned short var_11 = (unsigned short)13303;
unsigned int var_12 = 1720800934U;
unsigned short var_13 = (unsigned short)48465;
unsigned int var_14 = 3517489655U;
long long int var_15 = 657366607209082628LL;
int var_16 = -1177137960;
unsigned short var_17 = (unsigned short)20569;
int zero = 0;
long long int var_18 = -8564638606665949936LL;
unsigned short var_19 = (unsigned short)6482;
unsigned long long int var_20 = 10744342799757770078ULL;
unsigned int var_21 = 3725300224U;
int var_22 = -525712725;
long long int var_23 = 5679961441523327117LL;
long long int var_24 = -1177420557611902206LL;
short var_25 = (short)-31739;
long long int var_26 = -8010317178497799125LL;
unsigned long long int var_27 = 1497033486725048479ULL;
unsigned short var_28 = (unsigned short)63204;
_Bool var_29 = (_Bool)0;
_Bool arr_0 [18] [18] ;
_Bool arr_1 [18] ;
_Bool arr_2 [18] [18] ;
unsigned int arr_5 [18] ;
signed char arr_11 [18] [18] [18] ;
int arr_17 [18] [18] [18] ;
short arr_19 [20] [20] ;
unsigned long long int arr_20 [20] ;
unsigned int arr_21 [20] ;
unsigned long long int arr_22 [20] [20] ;
_Bool arr_25 [20] ;
_Bool arr_26 [20] [20] [20] ;
_Bool arr_27 [20] [20] [20] ;
unsigned int arr_29 [20] [20] [20] ;
unsigned short arr_30 [20] [20] [20] ;
signed char arr_31 [20] ;
int arr_35 [20] ;
unsigned short arr_36 [20] ;
_Bool arr_37 [20] [20] ;
unsigned int arr_3 [18] ;
_Bool arr_4 [18] [18] ;
long long int arr_7 [18] [18] [18] ;
long long int arr_8 [18] ;
long long int arr_14 [18] ;
long long int arr_15 [18] ;
_Bool arr_16 [18] [18] ;
signed char arr_23 [20] ;
long long int arr_28 [20] [20] [20] [20] ;
int arr_32 [20] ;
long long int arr_33 [20] [20] ;
_Bool arr_38 [20] ;
unsigned int arr_39 [20] [20] ;
unsigned long long int arr_43 [20] [20] [20] ;
unsigned short arr_44 [20] ;
unsigned int arr_45 [20] [20] ;
signed char arr_49 [20] [20] ;
unsigned short arr_50 [20] ;
unsigned short arr_54 [20] ;
long long int arr_55 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 3469553531U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 734730048;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (short)4038;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = 17224925101201985069ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 3541017738U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = 6574716220325482079ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 1621786277U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned short)45109;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_35 [i_0] = 1011233918;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = (unsigned short)35502;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_37 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1268742713U : 2504175232U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -154325412297669851LL : -5835203115830822844LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -7213981169635723010LL : -7840498671854351514LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3827571036385997068LL : -4507815624108305834LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -5323863491491174893LL : 7270687342696805510LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -9176307558484756189LL : -342243680588293522LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 208869848 : -1561334974;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_33 [i_0] [i_1] = (i_1 % 2 == 0) ? 7136054354925484133LL : -1542815078476175132LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_39 [i_0] [i_1] = 285022184U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 8611346163858931847ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_44 [i_0] = (unsigned short)64176;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_45 [i_0] [i_1] = 1404778635U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_49 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_50 [i_0] = (unsigned short)17985;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49486 : (unsigned short)10546;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? -1138559443888464785LL : 1740555822752895327LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_55 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
