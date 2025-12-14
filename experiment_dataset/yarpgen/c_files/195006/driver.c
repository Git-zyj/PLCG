#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20493;
unsigned long long int var_1 = 8012908778212003323ULL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7490883323341864236LL;
unsigned short var_4 = (unsigned short)26369;
unsigned long long int var_5 = 11952558349589728087ULL;
short var_6 = (short)-22680;
unsigned char var_7 = (unsigned char)92;
unsigned short var_8 = (unsigned short)7289;
unsigned long long int var_9 = 14195930952118821592ULL;
int zero = 0;
unsigned int var_10 = 1447595639U;
unsigned long long int var_11 = 7485903658929582818ULL;
long long int var_12 = -3574858768102554902LL;
unsigned long long int var_13 = 15551900702068089240ULL;
long long int var_14 = 5163069594159808716LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)52;
unsigned char var_17 = (unsigned char)2;
int var_18 = -455092255;
unsigned long long int var_19 = 16998685324101267590ULL;
unsigned char var_20 = (unsigned char)2;
long long int var_21 = 9125732591514648707LL;
short var_22 = (short)23165;
long long int var_23 = -6447779224756161836LL;
long long int var_24 = -5593206137136975244LL;
unsigned short var_25 = (unsigned short)30566;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 3483859695U;
unsigned long long int var_28 = 3697429125373813236ULL;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)17776;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)60003;
unsigned char var_33 = (unsigned char)32;
signed char var_34 = (signed char)-122;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)31251;
short var_37 = (short)26121;
unsigned long long int var_38 = 14424605779038984030ULL;
unsigned short var_39 = (unsigned short)28618;
unsigned char var_40 = (unsigned char)5;
_Bool var_41 = (_Bool)1;
int var_42 = 1388606524;
_Bool var_43 = (_Bool)1;
short var_44 = (short)22375;
unsigned int var_45 = 967686136U;
int var_46 = -2017123187;
signed char var_47 = (signed char)-75;
unsigned long long int var_48 = 13401593097917826220ULL;
short var_49 = (short)11487;
unsigned char var_50 = (unsigned char)56;
unsigned short var_51 = (unsigned short)3455;
unsigned char var_52 = (unsigned char)46;
unsigned char var_53 = (unsigned char)55;
_Bool var_54 = (_Bool)1;
short var_55 = (short)-27638;
unsigned int var_56 = 2487979521U;
unsigned short var_57 = (unsigned short)60862;
unsigned short var_58 = (unsigned short)10576;
unsigned char arr_0 [16] ;
unsigned long long int arr_2 [16] ;
int arr_3 [16] ;
unsigned int arr_6 [10] ;
unsigned long long int arr_8 [10] ;
unsigned long long int arr_12 [10] [10] [10] ;
unsigned short arr_13 [10] [10] [10] [10] ;
int arr_14 [10] [10] [10] [10] ;
long long int arr_15 [10] ;
int arr_18 [10] [10] ;
unsigned char arr_19 [10] [10] [10] [10] ;
int arr_22 [10] ;
unsigned long long int arr_31 [18] ;
unsigned long long int arr_32 [18] ;
short arr_33 [18] ;
int arr_35 [18] [18] ;
unsigned long long int arr_36 [18] [18] [18] ;
int arr_37 [18] [18] [18] ;
int arr_38 [18] ;
int arr_40 [18] [18] [18] ;
signed char arr_43 [18] [18] ;
long long int arr_45 [18] [18] [18] ;
short arr_46 [18] ;
unsigned char arr_47 [18] [18] [18] [18] [18] [18] ;
short arr_48 [18] [18] [18] [18] ;
int arr_49 [18] [18] [18] ;
short arr_50 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_53 [18] [18] [18] ;
signed char arr_54 [18] [18] ;
_Bool arr_57 [18] [18] [18] ;
unsigned char arr_60 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 12913942856403979991ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -2057910810;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 3752226102U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 4495285587913257631ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 13011814716441319827ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned short)64241;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -373031904;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -7980453020422344350LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = 287804713;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = 677305829;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = 14463083880077946801ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = 15713519253034996133ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_33 [i_0] = (short)-11152;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_35 [i_0] [i_1] = -33561827;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14927944722942609774ULL : 11152492569326703170ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 893743590;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_38 [i_0] = 2027334169;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1291890124 : 969649247;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_43 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = 2741350274609462290LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_46 [i_0] = (short)13261;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)24888 : (short)18399;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1346247740 : 497306525;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)12780 : (short)29413;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (unsigned short)33184;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_54 [i_0] [i_1] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_60 [i_0] = (unsigned char)57;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
