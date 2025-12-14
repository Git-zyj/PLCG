#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1959268978;
unsigned long long int var_1 = 1848841964380431493ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-872;
unsigned char var_4 = (unsigned char)139;
unsigned char var_5 = (unsigned char)132;
unsigned char var_6 = (unsigned char)70;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8328171835467883882LL;
unsigned short var_9 = (unsigned short)9917;
unsigned int var_10 = 619295984U;
unsigned char var_11 = (unsigned char)223;
unsigned int var_12 = 391513550U;
signed char var_13 = (signed char)-26;
short var_14 = (short)-17424;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)47262;
int zero = 0;
short var_17 = (short)14424;
unsigned long long int var_18 = 8841442824931337276ULL;
unsigned char var_19 = (unsigned char)56;
signed char var_20 = (signed char)-20;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-31246;
unsigned char var_23 = (unsigned char)170;
unsigned short var_24 = (unsigned short)64342;
unsigned short var_25 = (unsigned short)49385;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 2265308260U;
unsigned short var_28 = (unsigned short)64352;
long long int var_29 = -4586048809294397448LL;
unsigned char var_30 = (unsigned char)47;
signed char var_31 = (signed char)-36;
unsigned short var_32 = (unsigned short)57392;
_Bool var_33 = (_Bool)1;
short var_34 = (short)30109;
short var_35 = (short)-7640;
signed char var_36 = (signed char)21;
long long int var_37 = 6751758914977088409LL;
signed char var_38 = (signed char)-91;
unsigned char var_39 = (unsigned char)143;
short var_40 = (short)-329;
unsigned char var_41 = (unsigned char)136;
signed char var_42 = (signed char)122;
_Bool var_43 = (_Bool)0;
unsigned int var_44 = 3299193663U;
short var_45 = (short)9154;
_Bool var_46 = (_Bool)1;
short var_47 = (short)19875;
unsigned char var_48 = (unsigned char)76;
signed char var_49 = (signed char)-63;
long long int var_50 = -3577411701905537057LL;
short var_51 = (short)28136;
unsigned short var_52 = (unsigned short)31151;
signed char var_53 = (signed char)60;
unsigned short var_54 = (unsigned short)2074;
unsigned char var_55 = (unsigned char)75;
short var_56 = (short)-29010;
short var_57 = (short)23987;
unsigned char var_58 = (unsigned char)254;
unsigned short var_59 = (unsigned short)44008;
unsigned char var_60 = (unsigned char)237;
unsigned long long int var_61 = 5054746360783801942ULL;
int var_62 = -783901273;
unsigned char var_63 = (unsigned char)201;
unsigned short var_64 = (unsigned short)13562;
long long int var_65 = 2760144807514673279LL;
unsigned short var_66 = (unsigned short)13903;
long long int var_67 = 5278887877246437297LL;
unsigned char var_68 = (unsigned char)222;
unsigned short var_69 = (unsigned short)48191;
short var_70 = (short)11790;
short var_71 = (short)21933;
short var_72 = (short)5307;
short arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned int arr_4 [19] ;
short arr_5 [19] ;
signed char arr_6 [19] ;
unsigned char arr_7 [19] ;
int arr_10 [19] [19] ;
_Bool arr_13 [19] [19] [19] ;
unsigned short arr_16 [19] [19] ;
int arr_17 [19] [19] [19] [19] [19] [19] [19] ;
_Bool arr_18 [19] ;
signed char arr_23 [19] ;
signed char arr_24 [19] ;
unsigned short arr_26 [19] [19] [19] [19] ;
signed char arr_27 [19] [19] [19] ;
int arr_31 [19] [19] [19] [19] ;
int arr_34 [19] [19] [19] ;
unsigned short arr_38 [19] [19] [19] ;
short arr_41 [19] [19] [19] [19] [19] ;
int arr_42 [19] [19] [19] [19] [19] [19] [19] ;
unsigned short arr_44 [19] [19] [19] [19] ;
unsigned long long int arr_46 [19] [19] [19] [19] [19] ;
unsigned short arr_48 [19] [19] ;
long long int arr_49 [19] [19] [19] [19] [19] ;
unsigned char arr_52 [19] [19] [19] [19] [19] ;
short arr_61 [21] [21] ;
long long int arr_63 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)22472;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)64662;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 566911316U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)9442 : (short)-20742;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)30 : (signed char)89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 1769000493;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)45069;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1526528961;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)-77 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned short)17819;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-33 : (signed char)-86;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 1397174927;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 1817797007;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)45397;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-26830;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 530581526 : -1207550793;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)2225 : (unsigned short)23144;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = 6924715108672051397ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_48 [i_0] [i_1] = (unsigned short)36374;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = -6142044252769826080LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)33 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_61 [i_0] [i_1] = (short)1718;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_63 [i_0] = 8051725340061697563LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
