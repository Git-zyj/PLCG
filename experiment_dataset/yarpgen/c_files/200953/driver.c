#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9281;
short var_1 = (short)-21385;
short var_2 = (short)-28503;
signed char var_3 = (signed char)-21;
unsigned char var_4 = (unsigned char)10;
short var_5 = (short)-6871;
signed char var_6 = (signed char)122;
unsigned int var_7 = 3984016999U;
long long int var_8 = -7041530496522172013LL;
long long int var_9 = 6586498401977229421LL;
signed char var_10 = (signed char)-19;
signed char var_11 = (signed char)-77;
int zero = 0;
unsigned char var_12 = (unsigned char)39;
signed char var_13 = (signed char)-121;
long long int var_14 = 6203344056106446218LL;
int var_15 = 1534098281;
unsigned char var_16 = (unsigned char)219;
unsigned short var_17 = (unsigned short)12721;
unsigned char var_18 = (unsigned char)44;
long long int var_19 = -1793099158947480309LL;
unsigned long long int var_20 = 16457337920604083934ULL;
short var_21 = (short)19918;
unsigned short var_22 = (unsigned short)8033;
int var_23 = 810044982;
signed char var_24 = (signed char)120;
unsigned int var_25 = 2095564688U;
short var_26 = (short)-29232;
unsigned short var_27 = (unsigned short)59299;
short var_28 = (short)25264;
unsigned char var_29 = (unsigned char)145;
unsigned int var_30 = 2420069296U;
signed char var_31 = (signed char)93;
unsigned short var_32 = (unsigned short)1309;
unsigned int var_33 = 1296779766U;
signed char var_34 = (signed char)111;
unsigned int var_35 = 3406379819U;
unsigned int var_36 = 3717089582U;
unsigned char var_37 = (unsigned char)242;
unsigned char var_38 = (unsigned char)228;
short var_39 = (short)-22740;
unsigned int var_40 = 4147831530U;
long long int var_41 = -3509800665196226399LL;
int var_42 = -715292621;
long long int var_43 = 7368722897575430419LL;
unsigned int var_44 = 391187790U;
unsigned char var_45 = (unsigned char)0;
unsigned short var_46 = (unsigned short)59477;
int var_47 = -604988813;
unsigned int var_48 = 1543518491U;
int var_49 = -748555765;
_Bool var_50 = (_Bool)1;
unsigned char var_51 = (unsigned char)31;
signed char var_52 = (signed char)-122;
unsigned long long int var_53 = 1904222440619585942ULL;
unsigned int var_54 = 3301069683U;
unsigned int var_55 = 1010326140U;
_Bool var_56 = (_Bool)1;
unsigned short var_57 = (unsigned short)15284;
long long int var_58 = 7055215384607481501LL;
signed char var_59 = (signed char)-77;
short var_60 = (short)-19592;
unsigned short var_61 = (unsigned short)10976;
unsigned int var_62 = 317124524U;
unsigned int var_63 = 363603277U;
unsigned int var_64 = 2531674973U;
short var_65 = (short)-3347;
unsigned long long int var_66 = 1605118754452222853ULL;
_Bool var_67 = (_Bool)1;
unsigned short var_68 = (unsigned short)15478;
unsigned char var_69 = (unsigned char)37;
unsigned int var_70 = 3398170311U;
unsigned int var_71 = 1018025337U;
unsigned char var_72 = (unsigned char)17;
signed char var_73 = (signed char)-114;
long long int var_74 = 539627258898607492LL;
long long int var_75 = -692905742676502925LL;
_Bool var_76 = (_Bool)1;
short var_77 = (short)-16318;
_Bool var_78 = (_Bool)0;
signed char var_79 = (signed char)-31;
short var_80 = (short)-29449;
_Bool var_81 = (_Bool)0;
_Bool var_82 = (_Bool)0;
signed char var_83 = (signed char)26;
_Bool var_84 = (_Bool)1;
long long int var_85 = -6656893895680221894LL;
long long int var_86 = -4298516122267557347LL;
int var_87 = -211115693;
_Bool var_88 = (_Bool)0;
unsigned char var_89 = (unsigned char)39;
unsigned short arr_0 [24] [24] ;
long long int arr_1 [24] ;
int arr_5 [11] ;
long long int arr_8 [21] ;
signed char arr_10 [21] ;
long long int arr_15 [21] [21] ;
unsigned char arr_21 [21] [21] [21] ;
unsigned short arr_23 [21] [21] ;
unsigned char arr_24 [21] [21] [21] [21] ;
unsigned short arr_29 [21] ;
unsigned int arr_30 [21] [21] [21] ;
unsigned int arr_31 [21] [21] [21] ;
long long int arr_32 [21] [21] [21] ;
unsigned int arr_35 [21] ;
unsigned char arr_44 [21] [21] [21] [21] [21] ;
unsigned int arr_54 [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)50365;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -6202446281735666956LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 341547355;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 3090776679569031429LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 6568383667494272209LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23582 : (unsigned short)8092;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (unsigned short)59343;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 346429646U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4210846154U : 4061160882U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 7983596002446114511LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = 855605976U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 420004200U;
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
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
