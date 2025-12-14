#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -47829315531452595LL;
unsigned long long int var_1 = 5641502642977994066ULL;
signed char var_2 = (signed char)-102;
int var_3 = -459946000;
unsigned int var_4 = 3701096083U;
_Bool var_5 = (_Bool)1;
int var_6 = 1744605407;
int var_7 = 1930104593;
int var_8 = 1499830261;
unsigned long long int var_9 = 2853050136596838945ULL;
unsigned short var_10 = (unsigned short)6495;
int zero = 0;
unsigned short var_11 = (unsigned short)36639;
signed char var_12 = (signed char)-126;
unsigned char var_13 = (unsigned char)53;
int var_14 = -1867310174;
unsigned char var_15 = (unsigned char)188;
unsigned long long int var_16 = 17518573069096725352ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 1047067850;
unsigned int var_19 = 2847249479U;
unsigned long long int var_20 = 155547090481325856ULL;
unsigned int var_21 = 1864681642U;
int var_22 = -1205168530;
int var_23 = 783792278;
int var_24 = -1398956381;
int var_25 = 780692741;
short var_26 = (short)12723;
unsigned short var_27 = (unsigned short)36202;
unsigned char var_28 = (unsigned char)25;
short var_29 = (short)3849;
unsigned short var_30 = (unsigned short)41630;
unsigned char var_31 = (unsigned char)42;
_Bool var_32 = (_Bool)0;
signed char var_33 = (signed char)38;
int var_34 = 1897345352;
unsigned int var_35 = 4280700586U;
int var_36 = 712964142;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 4263359178072508733ULL;
unsigned long long int var_39 = 6947691709612284987ULL;
unsigned int var_40 = 4032744126U;
signed char var_41 = (signed char)-110;
short var_42 = (short)-10824;
unsigned char var_43 = (unsigned char)211;
int var_44 = -831226312;
int var_45 = 349908437;
unsigned int var_46 = 2086861284U;
_Bool var_47 = (_Bool)0;
unsigned char var_48 = (unsigned char)228;
unsigned char var_49 = (unsigned char)96;
signed char var_50 = (signed char)103;
unsigned char var_51 = (unsigned char)86;
_Bool var_52 = (_Bool)0;
unsigned char var_53 = (unsigned char)63;
unsigned char var_54 = (unsigned char)205;
unsigned short var_55 = (unsigned short)23231;
unsigned char var_56 = (unsigned char)13;
unsigned short var_57 = (unsigned short)53141;
int var_58 = -183080050;
unsigned int var_59 = 3836091524U;
unsigned short var_60 = (unsigned short)56126;
unsigned short var_61 = (unsigned short)30762;
long long int var_62 = -3710225980568467729LL;
unsigned short var_63 = (unsigned short)57763;
unsigned long long int arr_0 [16] ;
unsigned char arr_1 [16] ;
unsigned int arr_2 [16] [16] ;
unsigned char arr_3 [23] ;
unsigned int arr_4 [23] ;
signed char arr_6 [25] ;
signed char arr_9 [10] ;
unsigned char arr_12 [10] [10] [10] ;
unsigned char arr_13 [10] [10] ;
int arr_15 [10] [10] [10] ;
int arr_17 [10] [10] [10] [10] ;
unsigned int arr_18 [10] [10] ;
unsigned long long int arr_23 [10] [10] [10] ;
unsigned char arr_25 [14] ;
unsigned int arr_26 [14] [14] ;
unsigned char arr_27 [14] [14] ;
short arr_28 [14] [14] ;
unsigned long long int arr_29 [14] ;
unsigned int arr_31 [14] [14] ;
unsigned short arr_33 [14] [14] ;
unsigned char arr_34 [14] [14] [14] ;
signed char arr_41 [14] [14] [14] [14] ;
_Bool arr_49 [14] [14] [14] [14] [14] [14] [14] ;
long long int arr_50 [14] ;
unsigned char arr_57 [16] [16] ;
int arr_59 [16] [16] ;
short arr_61 [16] ;
_Bool arr_71 [16] [16] ;
unsigned char arr_78 [16] [16] [16] [16] [16] [16] ;
unsigned char arr_79 [16] [16] [16] [16] [16] ;
unsigned int arr_7 [25] ;
unsigned long long int arr_8 [25] ;
unsigned int arr_20 [10] ;
short arr_21 [10] ;
unsigned char arr_38 [14] [14] [14] ;
unsigned int arr_51 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_56 [14] [14] [14] ;
signed char arr_60 [16] ;
unsigned short arr_66 [16] ;
unsigned short arr_70 [16] ;
int arr_81 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 16574726796936178041ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 2304695849U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 3616847375U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 590508102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1897116763;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = 1540504165U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 2226007643219860164ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_25 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_26 [i_0] [i_1] = 2622728361U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = (short)-16025;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = 6431692485245155013ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_31 [i_0] [i_1] = 3828882318U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)32142;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-108 : (signed char)124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_50 [i_0] = 3219739969741873196LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_57 [i_0] [i_1] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_59 [i_0] [i_1] = (i_0 % 2 == 0) ? 1980624580 : -2018380084;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_61 [i_0] = (short)28953;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_71 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned char)241 : (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3852628530U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 10508171880238496503ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 3779937107U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_21 [i_0] = (short)15487;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1230070293U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)20 : (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? (signed char)40 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56623 : (unsigned short)34479;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_70 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2177 : (unsigned short)29508;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_81 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 125974466 : -898341233;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_56 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_70 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_81 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
