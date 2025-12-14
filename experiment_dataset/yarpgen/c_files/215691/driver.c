#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7670;
unsigned long long int var_1 = 115319530178112204ULL;
unsigned short var_3 = (unsigned short)6541;
_Bool var_4 = (_Bool)1;
long long int var_6 = -7452289089823659153LL;
unsigned char var_8 = (unsigned char)59;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-10966;
int var_12 = -2118590610;
unsigned int var_14 = 2667618559U;
long long int var_15 = 4877559187322477999LL;
int var_16 = -99278640;
unsigned char var_18 = (unsigned char)103;
int zero = 0;
unsigned int var_19 = 58615019U;
long long int var_20 = 6306114028905762469LL;
unsigned int var_21 = 1722868476U;
unsigned short var_22 = (unsigned short)24868;
long long int var_23 = -359391030797487777LL;
long long int var_24 = -8837232969649798717LL;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)42575;
long long int var_27 = 1107812049244055172LL;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)30112;
long long int var_30 = -3650313746367656871LL;
unsigned int var_31 = 3049425035U;
int var_32 = -1472127771;
long long int var_33 = 8111889892683542847LL;
int var_34 = -1518886888;
int var_35 = 487850414;
unsigned int var_36 = 3360688014U;
_Bool var_37 = (_Bool)1;
unsigned int var_38 = 2433046683U;
unsigned char var_39 = (unsigned char)214;
long long int var_40 = -1296609541570472080LL;
unsigned char var_41 = (unsigned char)252;
int var_42 = 124482230;
unsigned char var_43 = (unsigned char)141;
long long int var_44 = 6082673200020061682LL;
unsigned long long int var_45 = 8522224609880371237ULL;
unsigned int var_46 = 4078002452U;
long long int var_47 = -3621440989280271947LL;
unsigned int var_48 = 4161468602U;
short var_49 = (short)-12909;
short var_50 = (short)-27695;
unsigned int var_51 = 1745462407U;
unsigned int var_52 = 1153778457U;
int var_53 = 375853900;
int var_54 = 2020261806;
unsigned short var_55 = (unsigned short)32242;
signed char var_56 = (signed char)22;
unsigned long long int arr_0 [13] [13] ;
unsigned short arr_1 [13] [13] ;
long long int arr_2 [13] ;
unsigned char arr_3 [13] ;
_Bool arr_4 [13] [13] [13] ;
unsigned int arr_5 [13] [13] [13] [13] ;
long long int arr_6 [13] ;
int arr_7 [13] [13] ;
unsigned short arr_8 [13] [13] ;
unsigned long long int arr_9 [13] [13] [13] [13] ;
long long int arr_12 [13] [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] ;
_Bool arr_14 [13] [13] [13] ;
unsigned int arr_17 [13] [13] [13] [13] ;
unsigned int arr_29 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_31 [22] ;
int arr_34 [22] [22] [22] ;
long long int arr_35 [22] ;
short arr_36 [22] [22] ;
long long int arr_37 [22] [22] [22] [22] ;
unsigned char arr_38 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_39 [22] [22] [22] [22] ;
unsigned short arr_42 [22] [22] [22] [22] [22] [22] ;
int arr_43 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_45 [22] [22] [22] [22] ;
long long int arr_46 [22] ;
_Bool arr_47 [22] ;
short arr_49 [22] [22] [22] [22] [22] ;
long long int arr_50 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 4859304625646691174ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33956;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 7122356439208648112LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3490640094U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -8425957551731339108LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 486940125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)18132;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8726710448880365569ULL : 4903800616835669863ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1792569430879140757LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2228746932838387448ULL : 12216922461178759497ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 3082617375U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 493618504U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (unsigned short)7191;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = -1700703466;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = 9033137792518597542LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_36 [i_0] [i_1] = (short)1731;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = -7865286420817958946LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (unsigned short)44333;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)34778;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -56860016;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (unsigned short)21042;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_46 [i_0] = -2891954075191446217LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_47 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-11451;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = 5069382490931060499LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
