#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
_Bool var_1 = (_Bool)0;
long long int var_2 = 7583652948966926214LL;
unsigned short var_3 = (unsigned short)57782;
unsigned char var_4 = (unsigned char)249;
unsigned long long int var_5 = 14943874432106667852ULL;
unsigned int var_6 = 4252345069U;
unsigned char var_7 = (unsigned char)47;
unsigned short var_8 = (unsigned short)22538;
unsigned long long int var_9 = 12104661965083841607ULL;
unsigned int var_10 = 3696403938U;
unsigned char var_11 = (unsigned char)66;
int var_12 = 2012110780;
unsigned char var_13 = (unsigned char)142;
long long int var_14 = -7493450405251458353LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-25822;
long long int var_17 = 4515807937311879529LL;
unsigned short var_18 = (unsigned short)15663;
int zero = 0;
unsigned short var_19 = (unsigned short)43761;
unsigned char var_20 = (unsigned char)207;
unsigned char var_21 = (unsigned char)93;
signed char var_22 = (signed char)-60;
unsigned short var_23 = (unsigned short)25970;
long long int var_24 = -5836728897748751060LL;
unsigned char var_25 = (unsigned char)191;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)22507;
signed char var_28 = (signed char)93;
long long int var_29 = 9100825009610007932LL;
short var_30 = (short)14106;
unsigned char var_31 = (unsigned char)72;
signed char var_32 = (signed char)-114;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 3836495380U;
signed char var_35 = (signed char)3;
unsigned long long int var_36 = 10184442068422115148ULL;
long long int var_37 = -2568095510317895587LL;
_Bool var_38 = (_Bool)1;
short var_39 = (short)-10015;
long long int var_40 = 204572999396464457LL;
unsigned long long int var_41 = 11380047073185829880ULL;
long long int var_42 = 4138234340765167635LL;
short var_43 = (short)8418;
_Bool var_44 = (_Bool)1;
short var_45 = (short)6877;
unsigned int var_46 = 1337931906U;
long long int var_47 = 2458633096771157963LL;
unsigned int var_48 = 1904844940U;
short var_49 = (short)3102;
_Bool var_50 = (_Bool)0;
short var_51 = (short)-9179;
short var_52 = (short)-24388;
_Bool var_53 = (_Bool)0;
long long int var_54 = -131975741836674350LL;
unsigned short var_55 = (unsigned short)3422;
long long int var_56 = -8966908072663730560LL;
short var_57 = (short)1220;
long long int var_58 = 3868497349862102636LL;
long long int var_59 = 3696634925013215259LL;
int var_60 = -1977867751;
unsigned char var_61 = (unsigned char)170;
short var_62 = (short)12397;
signed char var_63 = (signed char)-77;
_Bool var_64 = (_Bool)1;
unsigned char var_65 = (unsigned char)173;
short var_66 = (short)-5622;
short var_67 = (short)20663;
unsigned long long int var_68 = 10514492199541629193ULL;
unsigned char var_69 = (unsigned char)218;
_Bool var_70 = (_Bool)1;
unsigned char var_71 = (unsigned char)14;
_Bool var_72 = (_Bool)0;
_Bool var_73 = (_Bool)1;
_Bool var_74 = (_Bool)1;
unsigned short var_75 = (unsigned short)26251;
short arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned int arr_2 [25] [25] [25] ;
unsigned char arr_3 [25] [25] ;
signed char arr_4 [25] [25] ;
unsigned char arr_6 [25] [25] [25] [25] ;
unsigned char arr_7 [25] [25] [25] [25] [25] [25] ;
long long int arr_8 [25] [25] [25] [25] [25] [25] ;
long long int arr_9 [25] [25] ;
unsigned short arr_10 [25] [25] ;
long long int arr_11 [25] [25] ;
_Bool arr_14 [25] [25] [25] ;
unsigned short arr_16 [25] [25] ;
unsigned char arr_17 [25] [25] [25] ;
unsigned char arr_19 [25] [25] ;
short arr_20 [25] [25] ;
unsigned short arr_21 [25] [25] ;
unsigned short arr_22 [25] [25] [25] ;
unsigned short arr_23 [25] [25] [25] [25] ;
short arr_24 [25] [25] ;
_Bool arr_25 [25] [25] [25] ;
_Bool arr_26 [25] [25] [25] [25] ;
unsigned long long int arr_29 [25] [25] ;
unsigned int arr_30 [25] [25] [25] ;
long long int arr_31 [25] [25] [25] [25] [25] [25] [25] ;
_Bool arr_34 [25] [25] [25] ;
unsigned short arr_35 [25] ;
long long int arr_39 [25] [25] [25] [25] ;
unsigned long long int arr_43 [25] [25] ;
int arr_48 [25] [25] [25] [25] [25] ;
unsigned short arr_51 [23] ;
unsigned char arr_66 [20] [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)23868;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 612246309U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3734253841341033083LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = -2840375146410610426LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)55269;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = -3992796911000560771LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)34078;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11099 : (short)31147;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)1941 : (unsigned short)18060;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)22987;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)39;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_24 [i_0] [i_1] = (short)25572;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 7088336103369672088ULL : 17546618201398996787ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1754800642U : 2429291124U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7219381874506943264LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = (unsigned short)37967;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = 6818491650573349221LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_43 [i_0] [i_1] = 11277654124573906879ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_48 [i_0] [i_1] [i_2] [i_3] [i_4] = 295530934;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_51 [i_0] = (unsigned short)31848;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_66 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)21 : (unsigned char)192;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
