#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
unsigned long long int var_1 = 6349201346405386587ULL;
long long int var_2 = -6076680796291827831LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)68;
signed char var_5 = (signed char)30;
unsigned long long int var_6 = 8601024437241250511ULL;
int var_7 = 898411913;
signed char var_8 = (signed char)-75;
int var_9 = 295985277;
long long int var_11 = 6075020688709009830LL;
unsigned short var_13 = (unsigned short)62167;
unsigned long long int var_15 = 545377929772890292ULL;
unsigned char var_16 = (unsigned char)95;
_Bool var_17 = (_Bool)0;
unsigned short var_19 = (unsigned short)978;
int zero = 0;
unsigned short var_20 = (unsigned short)3856;
unsigned int var_21 = 2752799401U;
unsigned long long int var_22 = 2975254158968223861ULL;
short var_23 = (short)27963;
signed char var_24 = (signed char)41;
int var_25 = 903948608;
unsigned long long int var_26 = 2145388790250570060ULL;
signed char var_27 = (signed char)-104;
unsigned int var_28 = 159311126U;
int var_29 = 1799499308;
unsigned long long int var_30 = 14240497768484382949ULL;
signed char var_31 = (signed char)93;
int var_32 = 2006677439;
short var_33 = (short)7184;
unsigned int var_34 = 3528128045U;
unsigned short var_35 = (unsigned short)22497;
int var_36 = -1605932568;
unsigned short var_37 = (unsigned short)23809;
signed char var_38 = (signed char)-77;
unsigned int var_39 = 1356127664U;
long long int var_40 = -8124190662806921289LL;
unsigned short var_41 = (unsigned short)4055;
_Bool var_42 = (_Bool)1;
short var_43 = (short)-8387;
unsigned char var_44 = (unsigned char)116;
unsigned short var_45 = (unsigned short)33318;
long long int var_46 = -7095322197552744976LL;
short var_47 = (short)5954;
_Bool var_48 = (_Bool)0;
int var_49 = -14884082;
unsigned int var_50 = 2955965806U;
signed char var_51 = (signed char)-126;
short var_52 = (short)23014;
int var_53 = -1328348436;
unsigned short var_54 = (unsigned short)55959;
unsigned long long int var_55 = 3252757412930612011ULL;
_Bool var_56 = (_Bool)1;
unsigned char var_57 = (unsigned char)1;
unsigned int var_58 = 227681782U;
unsigned short var_59 = (unsigned short)38975;
long long int var_60 = 4563127042538400860LL;
short var_61 = (short)11244;
unsigned char var_62 = (unsigned char)233;
int var_63 = -780815260;
unsigned short arr_0 [12] ;
short arr_1 [12] ;
unsigned long long int arr_6 [12] [12] [12] [12] ;
unsigned int arr_17 [18] ;
unsigned char arr_18 [18] ;
_Bool arr_19 [18] ;
unsigned char arr_20 [18] ;
unsigned long long int arr_25 [18] [18] ;
int arr_32 [18] ;
long long int arr_44 [18] [18] ;
unsigned long long int arr_48 [23] ;
unsigned int arr_49 [23] ;
int arr_50 [23] ;
int arr_51 [23] ;
_Bool arr_53 [23] [23] [23] ;
signed char arr_55 [23] [23] [23] ;
long long int arr_56 [23] [23] [23] [23] ;
int arr_63 [23] [23] ;
int arr_65 [23] ;
int arr_70 [23] ;
signed char arr_7 [12] [12] ;
signed char arr_8 [12] [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] [12] [12] [12] ;
signed char arr_23 [18] ;
int arr_52 [23] [23] ;
_Bool arr_59 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_60 [23] [23] [23] [23] [23] ;
short arr_61 [23] ;
long long int arr_62 [23] [23] ;
int arr_69 [23] [23] [23] ;
signed char arr_73 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)42649;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-9450;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 8374424701856213455ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = 3348236816U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = 424225543921427112ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = -104917311;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_44 [i_0] [i_1] = 1975277176924560284LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? 2307287489320451180ULL : 12607255001170656809ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? 2727971444U : 970273274U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_50 [i_0] = -1298117988;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_51 [i_0] = 576186240;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_56 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3967680514609318830LL : 6486434142211491857LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_63 [i_0] [i_1] = (i_0 % 2 == 0) ? 1166115933 : 1457147103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_65 [i_0] = (i_0 % 2 == 0) ? -156195245 : -985388293;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_70 [i_0] = (i_0 % 2 == 0) ? 18979430 : 831489141;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)24 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-55 : (signed char)-114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned short)16304 : (unsigned short)4423;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_52 [i_0] [i_1] = (i_0 % 2 == 0) ? -907017455 : -1138057064;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1231970030U : 173298544U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? (short)-20561 : (short)28213;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_62 [i_0] [i_1] = (i_1 % 2 == 0) ? -6265402802504706306LL : -129011189330782735LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1225864738 : -285568268;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)93;
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_61 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_62 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_69 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_73 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
