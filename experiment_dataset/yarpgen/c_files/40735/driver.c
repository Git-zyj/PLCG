#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
unsigned long long int var_1 = 16594228352086914763ULL;
signed char var_2 = (signed char)-15;
long long int var_3 = 4815285804132806114LL;
signed char var_4 = (signed char)-117;
unsigned long long int var_5 = 6785168277378843483ULL;
int var_6 = -551213251;
unsigned short var_7 = (unsigned short)29512;
int var_8 = -509780691;
unsigned char var_9 = (unsigned char)137;
signed char var_10 = (signed char)-98;
long long int var_11 = -1019720401005410777LL;
signed char var_12 = (signed char)63;
unsigned long long int var_13 = 13410999759499750877ULL;
int var_14 = 1589354549;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)5401;
unsigned long long int var_17 = 975276932974468258ULL;
short var_18 = (short)28455;
signed char var_19 = (signed char)-122;
int zero = 0;
long long int var_20 = 6262024990681517598LL;
int var_21 = 1273879237;
unsigned char var_22 = (unsigned char)223;
unsigned char var_23 = (unsigned char)84;
unsigned short var_24 = (unsigned short)31239;
signed char var_25 = (signed char)109;
unsigned char var_26 = (unsigned char)162;
int var_27 = 413010052;
unsigned short var_28 = (unsigned short)51682;
long long int var_29 = 8468909177454291176LL;
unsigned long long int var_30 = 2202194903290124568ULL;
unsigned short var_31 = (unsigned short)30787;
unsigned long long int var_32 = 14205466206348292873ULL;
signed char var_33 = (signed char)13;
unsigned short var_34 = (unsigned short)1164;
unsigned char var_35 = (unsigned char)218;
unsigned short var_36 = (unsigned short)24637;
unsigned short var_37 = (unsigned short)49606;
signed char var_38 = (signed char)-52;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)47773;
long long int var_41 = -4810059689120720663LL;
int var_42 = 2140376599;
unsigned long long int var_43 = 12488144940410599706ULL;
unsigned int var_44 = 1951793092U;
long long int var_45 = 7666305710142779246LL;
unsigned char var_46 = (unsigned char)149;
long long int var_47 = 5022626206706416828LL;
unsigned long long int var_48 = 3287604727928234158ULL;
unsigned long long int var_49 = 1562793142939827229ULL;
_Bool var_50 = (_Bool)1;
int var_51 = 1162310885;
unsigned short var_52 = (unsigned short)64310;
unsigned char var_53 = (unsigned char)3;
unsigned long long int var_54 = 15350863985994728598ULL;
int var_55 = -2063285535;
int var_56 = -1856341176;
_Bool var_57 = (_Bool)0;
unsigned short var_58 = (unsigned short)36714;
short var_59 = (short)-820;
short var_60 = (short)13034;
long long int var_61 = -116349685308740631LL;
short var_62 = (short)540;
long long int var_63 = 4552993860483363382LL;
_Bool var_64 = (_Bool)0;
unsigned short var_65 = (unsigned short)34858;
unsigned short var_66 = (unsigned short)11948;
unsigned char var_67 = (unsigned char)43;
_Bool var_68 = (_Bool)1;
_Bool var_69 = (_Bool)1;
signed char var_70 = (signed char)-21;
unsigned char var_71 = (unsigned char)67;
int var_72 = 1055421379;
unsigned long long int var_73 = 12075023340760349236ULL;
int var_74 = 417900944;
signed char var_75 = (signed char)106;
int arr_3 [14] [14] ;
int arr_9 [14] ;
unsigned long long int arr_14 [14] ;
unsigned short arr_17 [17] ;
unsigned short arr_33 [17] [17] [17] [17] ;
unsigned char arr_37 [17] [17] ;
unsigned long long int arr_44 [17] [17] [17] [17] [17] ;
short arr_45 [17] ;
_Bool arr_54 [17] [17] [17] [17] ;
int arr_57 [17] [17] [17] ;
int arr_58 [17] ;
unsigned long long int arr_73 [17] [17] [17] [17] ;
signed char arr_74 [17] ;
unsigned char arr_75 [17] [17] [17] ;
_Bool arr_83 [17] ;
unsigned long long int arr_90 [17] [17] [17] [17] ;
unsigned char arr_101 [17] [17] ;
long long int arr_102 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = -331357822;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -766061788 : -1567429041;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 10285663930866021063ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2944 : (unsigned short)15049;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (unsigned short)23791;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = 13640029362178432891ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_45 [i_0] = (short)-767;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = -1620241842;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_58 [i_0] = 1509355928;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 16347314804869133894ULL : 14416730502569699591ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? (signed char)57 : (signed char)-15;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_75 [i_0] [i_1] [i_2] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_83 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_90 [i_0] [i_1] [i_2] [i_3] = 17442122076382869522ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_101 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_102 [i_0] [i_1] = 2448509343841263811LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_73 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_75 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_83 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_90 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_101 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_102 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
