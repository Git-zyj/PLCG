#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
_Bool var_1 = (_Bool)0;
long long int var_2 = -2161959948115616877LL;
unsigned char var_3 = (unsigned char)122;
unsigned short var_4 = (unsigned short)2716;
unsigned char var_5 = (unsigned char)90;
long long int var_6 = -7408897016707765200LL;
unsigned short var_7 = (unsigned short)37489;
unsigned int var_8 = 3366244236U;
unsigned short var_9 = (unsigned short)61026;
int zero = 0;
int var_10 = 1063239819;
int var_11 = 786793235;
unsigned short var_12 = (unsigned short)45323;
unsigned long long int var_13 = 4529909379429019185ULL;
long long int var_14 = -5886439499133177101LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-4744;
short var_17 = (short)698;
int var_18 = 1642680683;
unsigned long long int var_19 = 12234569789508103571ULL;
signed char var_20 = (signed char)86;
short var_21 = (short)-31322;
long long int var_22 = -5427705906303399677LL;
unsigned char var_23 = (unsigned char)130;
unsigned char var_24 = (unsigned char)99;
unsigned char var_25 = (unsigned char)189;
signed char var_26 = (signed char)40;
short var_27 = (short)9977;
long long int var_28 = 71486478434863928LL;
long long int var_29 = -751203587198736129LL;
unsigned char var_30 = (unsigned char)4;
signed char var_31 = (signed char)29;
unsigned int var_32 = 79575917U;
long long int var_33 = 8453480452464434745LL;
unsigned long long int var_34 = 4449266303836931187ULL;
short var_35 = (short)31102;
unsigned short var_36 = (unsigned short)46732;
signed char var_37 = (signed char)69;
unsigned int var_38 = 1263789300U;
_Bool var_39 = (_Bool)0;
unsigned char var_40 = (unsigned char)149;
int var_41 = -1939717268;
long long int var_42 = -2142124082761193188LL;
unsigned char var_43 = (unsigned char)103;
short var_44 = (short)-23986;
signed char var_45 = (signed char)38;
signed char var_46 = (signed char)-118;
short var_47 = (short)11477;
signed char var_48 = (signed char)-117;
_Bool var_49 = (_Bool)0;
short var_50 = (short)-7037;
int var_51 = 1155418643;
unsigned char var_52 = (unsigned char)138;
short var_53 = (short)-27620;
unsigned long long int var_54 = 7406594365162511385ULL;
int var_55 = -877562412;
_Bool var_56 = (_Bool)1;
unsigned long long int var_57 = 2454537873136853501ULL;
short var_58 = (short)-5023;
unsigned char var_59 = (unsigned char)160;
unsigned short var_60 = (unsigned short)2687;
unsigned int var_61 = 2394273751U;
unsigned long long int var_62 = 10511903790570756015ULL;
unsigned short var_63 = (unsigned short)47397;
unsigned long long int var_64 = 9470912336186831561ULL;
unsigned long long int var_65 = 5861794439908454924ULL;
long long int var_66 = -5473725485019414650LL;
_Bool var_67 = (_Bool)0;
long long int var_68 = -5444147642744192538LL;
unsigned char var_69 = (unsigned char)91;
signed char arr_0 [18] ;
unsigned short arr_4 [18] [18] [18] ;
signed char arr_5 [18] [18] [18] [18] ;
signed char arr_6 [18] ;
unsigned char arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [18] [18] [18] ;
short arr_10 [18] [18] ;
unsigned long long int arr_11 [18] [18] [18] [18] ;
short arr_13 [18] [18] [18] [18] [18] [18] ;
long long int arr_14 [18] ;
unsigned long long int arr_15 [18] [18] [18] [18] [18] ;
_Bool arr_16 [18] [18] [18] [18] [18] ;
long long int arr_17 [18] [18] [18] [18] [18] ;
_Bool arr_20 [18] ;
unsigned long long int arr_22 [22] ;
long long int arr_23 [22] ;
unsigned long long int arr_25 [22] ;
unsigned int arr_26 [22] [22] ;
unsigned char arr_27 [22] [22] [22] ;
unsigned long long int arr_28 [22] [22] ;
signed char arr_29 [22] ;
unsigned short arr_30 [22] [22] [22] ;
signed char arr_31 [22] [22] [22] ;
short arr_32 [22] [22] ;
unsigned int arr_33 [22] ;
unsigned long long int arr_34 [22] [22] ;
unsigned short arr_36 [22] ;
short arr_37 [22] [22] ;
long long int arr_38 [22] [22] ;
unsigned long long int arr_43 [22] [22] [22] ;
int arr_45 [22] [22] [22] ;
unsigned long long int arr_46 [22] [22] [22] [22] ;
signed char arr_60 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)7867;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 6169732416784389553ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (short)24791;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 9363753213555000679ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)11156;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 6981906292001178807LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 3768036624094104997ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 148537591280812854LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = 14472406234285499122ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 5838808545657460451LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 12815749545102573703ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = 796036546U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = 12839719886544957624ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_29 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned short)55124;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_32 [i_0] [i_1] = (short)24533;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = 1284386081U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_34 [i_0] [i_1] = 5506957191218193880ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (unsigned short)64760;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_37 [i_0] [i_1] = (short)-31287;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = (i_0 % 2 == 0) ? 3268777429876474251LL : 1000425117884675677LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 15643267007093844596ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = -80504484;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 8749916159435179315ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (signed char)-28;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
