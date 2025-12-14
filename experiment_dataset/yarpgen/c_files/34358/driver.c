#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
signed char var_1 = (signed char)-9;
signed char var_2 = (signed char)-103;
signed char var_3 = (signed char)-12;
unsigned char var_4 = (unsigned char)189;
unsigned int var_7 = 1203567481U;
short var_8 = (short)14189;
int zero = 0;
short var_10 = (short)3453;
_Bool var_11 = (_Bool)1;
long long int var_12 = 2662954371106372031LL;
unsigned int var_13 = 2991383227U;
unsigned char var_14 = (unsigned char)120;
short var_15 = (short)12635;
unsigned short var_16 = (unsigned short)42037;
short var_17 = (short)-14195;
unsigned int var_18 = 3544188478U;
unsigned char var_19 = (unsigned char)239;
long long int var_20 = -3591778141424477167LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-15;
signed char var_23 = (signed char)-16;
unsigned char var_24 = (unsigned char)190;
unsigned short var_25 = (unsigned short)10298;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)107;
short var_29 = (short)16760;
short var_30 = (short)-10017;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 3536243675U;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)58610;
long long int var_35 = -6657769603190603803LL;
signed char var_36 = (signed char)-121;
unsigned short var_37 = (unsigned short)12330;
short arr_0 [22] ;
short arr_1 [22] [22] ;
signed char arr_2 [22] ;
unsigned int arr_3 [22] ;
short arr_4 [22] [22] [22] ;
signed char arr_5 [22] [22] [22] ;
_Bool arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
unsigned char arr_8 [22] [22] [22] ;
unsigned char arr_9 [22] [22] [22] [22] [22] ;
unsigned int arr_10 [22] [22] [22] [22] [22] [22] ;
short arr_11 [22] [22] [22] [22] ;
_Bool arr_12 [22] [22] [22] [22] ;
long long int arr_15 [22] [22] [22] [22] [22] ;
signed char arr_16 [22] [22] [22] [22] [22] [22] ;
signed char arr_17 [22] [22] [22] ;
short arr_18 [22] [22] ;
signed char arr_23 [22] [22] [22] [22] ;
unsigned char arr_26 [22] [22] [22] ;
unsigned int arr_27 [22] [22] [22] ;
signed char arr_29 [22] [22] [22] [22] [22] ;
long long int arr_32 [22] [22] [22] [22] [22] ;
_Bool arr_33 [22] ;
unsigned short arr_34 [22] [22] [22] [22] [22] [22] [22] ;
signed char arr_35 [22] ;
unsigned short arr_36 [22] ;
unsigned short arr_37 [22] [22] ;
signed char arr_38 [22] [22] ;
unsigned short arr_41 [22] ;
signed char arr_42 [22] [22] [22] ;
signed char arr_45 [22] [22] [22] [22] ;
unsigned short arr_54 [22] ;
long long int arr_13 [22] [22] [22] ;
_Bool arr_14 [22] ;
signed char arr_21 [22] ;
signed char arr_24 [22] [22] [22] [22] ;
unsigned short arr_25 [22] [22] [22] ;
short arr_39 [22] [22] [22] [22] ;
unsigned int arr_46 [22] [22] [22] [22] ;
_Bool arr_47 [22] [22] [22] ;
signed char arr_51 [22] ;
unsigned short arr_67 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)25243 : (short)10660;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)17761 : (short)27495;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3491449964U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-6269;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)196 : (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4063021307U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (short)28336;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = -5505304294024208798LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)98 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (short)-12543;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-110 : (signed char)-97;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)84 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 78386915U : 3681892945U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 4821499211699145572LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)27506;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (signed char)-108 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (unsigned short)42132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned short)3313;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18098 : (unsigned short)32180;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-49 : (signed char)25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-109 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_54 [i_0] = (unsigned short)14549;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7984565627537712991LL : 7235982053922204104LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (signed char)4 : (signed char)-87;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)66 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)12313 : (unsigned short)11345;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)23909 : (short)-1299;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3870355004U : 2783665859U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_51 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_67 [i_0] [i_1] = (unsigned short)6826;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_67 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
