#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2035488640U;
unsigned short var_2 = (unsigned short)2348;
int var_3 = 2057885110;
long long int var_4 = -1388016861919208482LL;
unsigned long long int var_5 = 8036284615845332851ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-122;
int var_8 = -776001776;
long long int var_9 = 6083996063939799129LL;
short var_10 = (short)16002;
long long int var_11 = 1010818106765179416LL;
unsigned short var_12 = (unsigned short)51013;
signed char var_13 = (signed char)-86;
unsigned long long int var_14 = 6573154631513752994ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)26673;
unsigned char var_17 = (unsigned char)70;
int zero = 0;
unsigned int var_18 = 166601027U;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)22;
long long int var_21 = 2814354258035474241LL;
unsigned char var_22 = (unsigned char)126;
long long int var_23 = -1612588504640262740LL;
long long int var_24 = 8044343223935527866LL;
short var_25 = (short)-22022;
int var_26 = 66530378;
unsigned long long int var_27 = 6076692987570700743ULL;
unsigned long long int var_28 = 5837884906181102641ULL;
unsigned short var_29 = (unsigned short)18647;
unsigned char var_30 = (unsigned char)150;
short var_31 = (short)-17386;
unsigned long long int var_32 = 13753692232687832429ULL;
unsigned char var_33 = (unsigned char)59;
signed char var_34 = (signed char)123;
unsigned long long int var_35 = 6233169229337294907ULL;
unsigned long long int var_36 = 13779571369573685400ULL;
_Bool var_37 = (_Bool)0;
unsigned int var_38 = 2058133684U;
long long int var_39 = 2713803068177806026LL;
long long int var_40 = -7788495989499779471LL;
long long int var_41 = -6584560420544420714LL;
short var_42 = (short)780;
unsigned short var_43 = (unsigned short)8603;
long long int var_44 = 5460815865940445152LL;
unsigned int var_45 = 864540631U;
unsigned long long int var_46 = 10002603476112908611ULL;
unsigned short var_47 = (unsigned short)15796;
unsigned char var_48 = (unsigned char)164;
int var_49 = 204141757;
unsigned short var_50 = (unsigned short)35064;
unsigned short var_51 = (unsigned short)64249;
signed char var_52 = (signed char)61;
unsigned short var_53 = (unsigned short)12094;
unsigned char var_54 = (unsigned char)63;
long long int var_55 = -8306548793607344066LL;
short var_56 = (short)22627;
unsigned char var_57 = (unsigned char)160;
unsigned int var_58 = 3049316490U;
unsigned short var_59 = (unsigned short)3441;
_Bool var_60 = (_Bool)0;
signed char arr_1 [16] ;
unsigned char arr_2 [16] ;
unsigned long long int arr_4 [16] ;
signed char arr_5 [16] ;
_Bool arr_7 [16] ;
short arr_8 [16] [16] ;
_Bool arr_10 [16] ;
short arr_11 [16] [16] ;
unsigned long long int arr_18 [12] ;
long long int arr_19 [12] ;
signed char arr_24 [12] [12] [12] [12] ;
unsigned int arr_25 [12] [12] [12] ;
signed char arr_28 [12] [12] [12] [12] ;
unsigned int arr_29 [12] ;
unsigned int arr_30 [12] [12] [12] [12] ;
unsigned short arr_33 [12] [12] [12] ;
signed char arr_46 [12] ;
short arr_51 [18] ;
unsigned short arr_53 [18] [18] ;
unsigned long long int arr_54 [18] [18] [18] ;
int arr_55 [18] ;
_Bool arr_56 [18] ;
unsigned short arr_58 [18] [18] ;
_Bool arr_61 [18] [18] ;
unsigned short arr_67 [18] [18] [18] ;
unsigned short arr_77 [18] [18] ;
unsigned long long int arr_6 [16] [16] ;
int arr_9 [16] ;
long long int arr_12 [16] [16] ;
unsigned int arr_32 [12] [12] ;
signed char arr_37 [12] ;
short arr_49 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_50 [12] [12] [12] [12] [12] [12] [12] ;
long long int arr_59 [18] ;
long long int arr_60 [18] [18] ;
_Bool arr_78 [18] ;
long long int arr_79 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 9408590939307665995ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-7104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-19535;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 13174756948972256930ULL : 2353213130923807882ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -7282892543873742101LL : -1535080769615257534LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 2950820800U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_29 [i_0] = 1740622074U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2912926157U : 479082163U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned short)19581;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_46 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_51 [i_0] = (short)23503;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_53 [i_0] [i_1] = (unsigned short)55058;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = 3856158997150949948ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? -279041366 : -1337488287;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_56 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_58 [i_0] [i_1] = (unsigned short)26004;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_61 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_67 [i_0] [i_1] [i_2] = (unsigned short)39652;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_77 [i_0] [i_1] = (unsigned short)24460;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 6193535283596824074ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 49977736;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 1978122970987528680LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? 161975363U : 784405098U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)-120;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (short)-14390 : (short)2512;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 457524681U : 123150072U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? 2051122306729943071LL : -5290057198306405332LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_60 [i_0] [i_1] = (i_0 % 2 == 0) ? -8320107383169673692LL : 3574861523533132443LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_78 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_79 [i_0] [i_1] = (i_0 % 2 == 0) ? 2135224935326990708LL : 8476468753971043671LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                hash(&seed, arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_60 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_78 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_79 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
