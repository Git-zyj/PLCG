#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
short var_1 = (short)16384;
unsigned char var_2 = (unsigned char)214;
unsigned int var_4 = 4054162824U;
unsigned char var_6 = (unsigned char)100;
unsigned short var_7 = (unsigned short)53421;
signed char var_8 = (signed char)82;
unsigned long long int var_10 = 8045178820912746431ULL;
long long int var_11 = 3818250307805085793LL;
unsigned int var_12 = 1476101127U;
unsigned char var_14 = (unsigned char)95;
unsigned short var_15 = (unsigned short)21247;
signed char var_16 = (signed char)-83;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 5686683856796073077ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)54608;
unsigned short var_21 = (unsigned short)4161;
unsigned long long int var_22 = 17871011537219851019ULL;
unsigned int var_23 = 4280934643U;
unsigned long long int var_24 = 6879910832333199713ULL;
long long int var_25 = -6994182099851604122LL;
unsigned long long int var_26 = 16539431079428669273ULL;
unsigned long long int var_27 = 13404928317580927657ULL;
unsigned long long int var_28 = 2627333518316799150ULL;
signed char var_29 = (signed char)43;
int var_30 = 178334434;
unsigned long long int var_31 = 591675211673132537ULL;
signed char var_32 = (signed char)-50;
unsigned char var_33 = (unsigned char)75;
unsigned int var_34 = 354958398U;
long long int var_35 = 6174139810942605242LL;
int var_36 = 1249512336;
int var_37 = 1227353841;
unsigned short var_38 = (unsigned short)12227;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 10592252922252649777ULL;
_Bool var_41 = (_Bool)1;
unsigned short var_42 = (unsigned short)44605;
signed char var_43 = (signed char)-68;
signed char var_44 = (signed char)95;
unsigned short var_45 = (unsigned short)38133;
unsigned int var_46 = 3368532821U;
unsigned short var_47 = (unsigned short)53021;
int var_48 = 2090269933;
short arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned long long int arr_3 [24] [24] ;
int arr_4 [24] [24] ;
signed char arr_5 [24] ;
long long int arr_6 [24] [24] [24] [24] ;
unsigned char arr_7 [24] [24] ;
unsigned char arr_8 [24] [24] [24] ;
unsigned char arr_10 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_11 [24] ;
unsigned char arr_13 [21] [21] ;
unsigned short arr_16 [21] ;
short arr_20 [21] [21] [21] ;
long long int arr_23 [21] [21] ;
short arr_24 [21] [21] [21] ;
long long int arr_26 [21] [21] [21] [21] ;
unsigned char arr_28 [21] ;
unsigned short arr_29 [21] [21] [21] [21] ;
short arr_32 [21] [21] [21] [21] [21] ;
signed char arr_34 [21] [21] [21] [21] [21] ;
signed char arr_35 [21] [21] [21] ;
unsigned char arr_37 [21] ;
int arr_39 [21] ;
long long int arr_41 [21] ;
short arr_43 [21] ;
unsigned short arr_2 [24] [24] ;
unsigned long long int arr_12 [24] [24] [24] [24] ;
_Bool arr_17 [21] ;
unsigned long long int arr_25 [21] [21] ;
long long int arr_30 [21] [21] [21] ;
long long int arr_31 [21] [21] [21] ;
unsigned int arr_44 [21] ;
short arr_48 [21] ;
unsigned short arr_49 [21] ;
unsigned int arr_52 [21] [21] ;
unsigned long long int arr_53 [21] [21] ;
unsigned short arr_54 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)7056;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -122002936;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 17892242553713452253ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -1782074215;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -9070183667917862335LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned char)162 : (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1188071772U : 887689187U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (unsigned short)47156;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)-25992;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = -3845313766860080814LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)11115 : (short)-28587;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -6870498314422187050LL : 9055465128994767297LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2716;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-23437 : (short)-21012;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? -1158453383 : 681679866;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = 6352779073913231243LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (short)-22371 : (short)-6704;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)56204;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3360777642152393258ULL : 5081407507291884977ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 8089411956583199294ULL : 2272203926317564625ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9049881121492677506LL : -8892384630080958688LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1058135957039578925LL : -1508350740119357077LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? 1398408781U : 4235095193U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (short)-8552 : (short)11307;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35346 : (unsigned short)34309;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_52 [i_0] [i_1] = 887700782U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_53 [i_0] [i_1] = 8359431595439623793ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_54 [i_0] = (unsigned short)26532;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_52 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_54 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
