#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 682026341U;
unsigned char var_2 = (unsigned char)195;
int var_3 = 260191380;
signed char var_4 = (signed char)-105;
signed char var_5 = (signed char)-113;
signed char var_6 = (signed char)-80;
unsigned int var_7 = 1827490844U;
int var_9 = 1363860297;
unsigned char var_10 = (unsigned char)202;
unsigned char var_12 = (unsigned char)196;
unsigned long long int var_13 = 9301893620578779243ULL;
short var_14 = (short)28652;
short var_15 = (short)-11516;
int var_16 = 278745478;
short var_17 = (short)-24136;
int zero = 0;
int var_18 = 679918682;
_Bool var_19 = (_Bool)0;
long long int var_20 = -9108788916131745586LL;
short var_21 = (short)12907;
unsigned short var_22 = (unsigned short)9758;
unsigned long long int var_23 = 12776360380362407982ULL;
unsigned long long int var_24 = 14358951015210874503ULL;
signed char var_25 = (signed char)-77;
unsigned char var_26 = (unsigned char)6;
int var_27 = 1611688194;
int var_28 = 55762214;
long long int var_29 = 4120043735707863078LL;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-28851;
signed char var_32 = (signed char)-98;
long long int var_33 = 6845734342137085610LL;
int var_34 = 717613360;
unsigned long long int var_35 = 6087753130842491602ULL;
int var_36 = -833803048;
int var_37 = -1032714247;
long long int var_38 = 7600147980361910246LL;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)47;
long long int var_41 = -183098978032789642LL;
_Bool var_42 = (_Bool)0;
_Bool var_43 = (_Bool)0;
short var_44 = (short)-26852;
unsigned int var_45 = 1830583758U;
int var_46 = -210892358;
unsigned long long int var_47 = 14839481739045521089ULL;
_Bool var_48 = (_Bool)1;
int var_49 = -2100549391;
unsigned long long int var_50 = 17792782585661323962ULL;
unsigned char var_51 = (unsigned char)100;
unsigned long long int var_52 = 3684981076071277069ULL;
int var_53 = 2145089264;
int var_54 = 327563321;
int var_55 = -979623357;
_Bool var_56 = (_Bool)0;
unsigned short var_57 = (unsigned short)25986;
unsigned char var_58 = (unsigned char)33;
short var_59 = (short)-15934;
long long int var_60 = -4960913867111458582LL;
unsigned int var_61 = 3712206755U;
unsigned char arr_0 [25] ;
long long int arr_1 [25] ;
unsigned char arr_2 [25] [25] ;
short arr_3 [25] ;
int arr_4 [25] [25] ;
int arr_5 [25] ;
unsigned short arr_6 [25] ;
unsigned int arr_10 [21] [21] [21] ;
unsigned char arr_11 [21] [21] [21] ;
short arr_12 [21] [21] [21] ;
short arr_13 [21] ;
long long int arr_14 [21] ;
short arr_16 [21] [21] [21] [21] [21] ;
unsigned char arr_17 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_18 [21] [21] [21] [21] [21] ;
unsigned short arr_22 [21] [21] [21] [21] [21] [21] ;
signed char arr_23 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_24 [21] [21] [21] ;
short arr_25 [21] [21] [21] [21] ;
signed char arr_27 [21] [21] [21] [21] ;
int arr_28 [21] [21] [21] [21] ;
int arr_30 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_34 [21] [21] ;
unsigned char arr_35 [21] [21] [21] ;
unsigned char arr_36 [21] [21] [21] [21] [21] [21] [21] ;
signed char arr_37 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 25727738755054378LL : -8415366631419994005LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)19077;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -226354433;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -864686630;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)14434;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3851190920U : 3582605601U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)117 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-29661;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)27479 : (short)28240;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 5868757830718431034LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)25194;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 18157706385270217993ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)35108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 13728888U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)2288 : (short)-12926;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1765945019 : 365144008;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -1275698821 : -1427599556;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)8 : (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (signed char)86;
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
