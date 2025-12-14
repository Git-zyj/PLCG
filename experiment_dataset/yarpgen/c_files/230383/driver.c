#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2536951291U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-49;
int var_4 = 1504171133;
long long int var_7 = -7609835118804948192LL;
int var_10 = -303960977;
short var_12 = (short)-32633;
short var_13 = (short)7087;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)122;
unsigned int var_16 = 1356428461U;
int var_17 = -285621193;
signed char var_18 = (signed char)-100;
int zero = 0;
short var_19 = (short)6126;
signed char var_20 = (signed char)-74;
unsigned char var_21 = (unsigned char)188;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)78;
long long int var_24 = 4625213085062236451LL;
signed char var_25 = (signed char)-113;
unsigned int var_26 = 183230509U;
signed char var_27 = (signed char)-104;
long long int var_28 = 4040750687508873906LL;
short var_29 = (short)18892;
_Bool var_30 = (_Bool)0;
int var_31 = 1228404266;
signed char var_32 = (signed char)117;
short var_33 = (short)4757;
signed char var_34 = (signed char)99;
int var_35 = -1806657953;
_Bool var_36 = (_Bool)0;
signed char var_37 = (signed char)-34;
unsigned char var_38 = (unsigned char)176;
_Bool var_39 = (_Bool)1;
int var_40 = -1884215683;
unsigned short var_41 = (unsigned short)56713;
short var_42 = (short)-12886;
int var_43 = 1642445374;
signed char var_44 = (signed char)-30;
_Bool var_45 = (_Bool)1;
short var_46 = (short)-8834;
unsigned int var_47 = 222596265U;
signed char var_48 = (signed char)-2;
int var_49 = -104538653;
_Bool var_50 = (_Bool)1;
unsigned int var_51 = 2118957544U;
unsigned int var_52 = 3284464978U;
unsigned short var_53 = (unsigned short)12419;
short var_54 = (short)-4879;
_Bool var_55 = (_Bool)0;
unsigned char var_56 = (unsigned char)55;
_Bool var_57 = (_Bool)1;
signed char var_58 = (signed char)5;
signed char var_59 = (signed char)-4;
unsigned short var_60 = (unsigned short)32831;
long long int var_61 = -8217160968471482024LL;
long long int var_62 = 6282626373683905498LL;
int var_63 = -1724572402;
short var_64 = (short)-4147;
short var_65 = (short)-5151;
unsigned char var_66 = (unsigned char)47;
unsigned int var_67 = 2286924731U;
signed char var_68 = (signed char)-17;
_Bool var_69 = (_Bool)0;
_Bool var_70 = (_Bool)0;
_Bool var_71 = (_Bool)0;
signed char var_72 = (signed char)85;
_Bool var_73 = (_Bool)1;
unsigned char var_74 = (unsigned char)132;
int var_75 = -2017316154;
_Bool var_76 = (_Bool)1;
unsigned int var_77 = 1563900239U;
short var_78 = (short)11235;
unsigned int var_79 = 913417359U;
_Bool var_80 = (_Bool)0;
_Bool arr_24 [23] [23] [23] [23] [23] [23] ;
int arr_51 [19] [19] [19] [19] [19] ;
short arr_54 [19] [19] [19] [19] ;
unsigned char arr_69 [19] [19] [19] [19] [19] ;
short arr_88 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 893629227 : -421090655;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-20715 : (short)21682;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)98 : (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_88 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)1556 : (short)-5474;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_88 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
