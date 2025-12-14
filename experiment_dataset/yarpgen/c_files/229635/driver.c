#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4678210853115091541LL;
unsigned int var_1 = 3133237U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 3139254450324994741ULL;
int var_4 = 891552010;
unsigned long long int var_5 = 8323435200079090114ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-12555;
signed char var_10 = (signed char)-61;
_Bool var_11 = (_Bool)0;
long long int var_12 = 4724488378291517239LL;
unsigned short var_13 = (unsigned short)2209;
long long int var_15 = 2949171534945745012LL;
short var_16 = (short)-17252;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-10762;
int var_19 = -1613864787;
long long int var_20 = -3022430904509530636LL;
unsigned long long int var_21 = 2112479334682181284ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)35;
unsigned long long int var_24 = 5047992783405305215ULL;
long long int var_25 = -1458220506362315576LL;
int var_26 = -1822134651;
int var_27 = -573886247;
int var_28 = -59248747;
signed char var_29 = (signed char)126;
unsigned short var_30 = (unsigned short)15485;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 4054581741U;
long long int var_33 = 855247641108850491LL;
int var_34 = 41065977;
int var_35 = -608044087;
_Bool var_36 = (_Bool)1;
short var_37 = (short)-10337;
unsigned long long int var_38 = 16467321520235548976ULL;
long long int var_39 = 1174982230629486229LL;
int var_40 = -756154694;
unsigned int var_41 = 383842781U;
unsigned short var_42 = (unsigned short)57946;
unsigned long long int var_43 = 7687602654574981883ULL;
short var_44 = (short)3022;
int var_45 = -1834621874;
short var_46 = (short)-14754;
signed char var_47 = (signed char)122;
signed char var_48 = (signed char)61;
long long int var_49 = -6708972085136472749LL;
signed char var_50 = (signed char)-23;
signed char var_51 = (signed char)-87;
signed char var_52 = (signed char)86;
signed char var_53 = (signed char)21;
long long int var_54 = 3631072701546578885LL;
unsigned long long int var_55 = 14058628030707706971ULL;
int var_56 = -529256294;
_Bool var_57 = (_Bool)0;
_Bool var_58 = (_Bool)0;
int var_59 = -1155033351;
_Bool var_60 = (_Bool)1;
unsigned int var_61 = 1785550000U;
short arr_0 [21] ;
unsigned short arr_2 [21] [21] ;
signed char arr_3 [21] [21] [21] ;
signed char arr_5 [21] [21] [21] ;
long long int arr_6 [21] [21] [21] ;
long long int arr_7 [21] [21] [21] ;
unsigned short arr_8 [21] [21] [21] [21] ;
signed char arr_10 [21] [21] [21] [21] [21] [21] ;
short arr_11 [21] [21] [21] ;
_Bool arr_12 [21] [21] [21] [21] ;
unsigned short arr_15 [21] [21] [21] [21] ;
int arr_17 [21] [21] ;
long long int arr_19 [21] [21] [21] [21] [21] ;
signed char arr_21 [21] ;
short arr_22 [21] [21] [21] [21] [21] [21] ;
signed char arr_25 [21] [21] ;
short arr_27 [21] [21] ;
long long int arr_28 [21] ;
long long int arr_32 [21] ;
int arr_33 [21] [21] [21] ;
signed char arr_35 [21] [21] ;
signed char arr_36 [21] ;
long long int arr_37 [21] [21] ;
long long int arr_38 [21] ;
short arr_52 [21] [21] [21] [21] ;
long long int arr_56 [25] ;
long long int arr_57 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)18779;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)53699;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8108452706713887330LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 5936003076647604756LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)44173;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)10328;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4434;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = 37284289;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -428471264093524300LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-21039;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = (short)1380;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = -8905181985087295195LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 219573923864609710LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -555559367;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)47 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_36 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_37 [i_0] [i_1] = -7615914916721411783LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = 5144145537096738131LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (short)-21325;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_56 [i_0] = -4683149053644664904LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_57 [i_0] [i_1] = -3638638044417458368LL;
}

void checksum() {
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
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
