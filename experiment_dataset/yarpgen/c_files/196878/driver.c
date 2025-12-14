#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13075348855307822025ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)54;
unsigned short var_3 = (unsigned short)28544;
unsigned short var_4 = (unsigned short)47398;
unsigned short var_5 = (unsigned short)7425;
long long int var_6 = -7740868110612679457LL;
short var_7 = (short)-17103;
unsigned short var_8 = (unsigned short)50903;
unsigned char var_9 = (unsigned char)107;
unsigned long long int var_11 = 7149160888380543184ULL;
long long int var_12 = 7855036970525200078LL;
unsigned long long int var_13 = 3793555160100669377ULL;
unsigned long long int var_14 = 774932955352305819ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)53439;
signed char var_18 = (signed char)53;
int zero = 0;
unsigned int var_19 = 2332774659U;
signed char var_20 = (signed char)46;
short var_21 = (short)-19336;
short var_22 = (short)-10533;
int var_23 = -2094394101;
unsigned char var_24 = (unsigned char)193;
unsigned char var_25 = (unsigned char)248;
unsigned long long int var_26 = 7261789143142495561ULL;
unsigned int var_27 = 3220387198U;
unsigned short var_28 = (unsigned short)48019;
long long int var_29 = 6765154094135355582LL;
signed char var_30 = (signed char)-122;
signed char var_31 = (signed char)103;
unsigned long long int var_32 = 1759017627514902786ULL;
short var_33 = (short)19492;
unsigned long long int var_34 = 8097729309166519024ULL;
unsigned int var_35 = 888691421U;
unsigned char var_36 = (unsigned char)112;
unsigned long long int var_37 = 11041033671125142480ULL;
int var_38 = -1687429377;
int var_39 = -620684406;
short var_40 = (short)29256;
unsigned short var_41 = (unsigned short)44027;
unsigned char var_42 = (unsigned char)246;
long long int var_43 = 5221058329184898679LL;
unsigned long long int var_44 = 2167183656845921061ULL;
_Bool var_45 = (_Bool)0;
short arr_0 [22] ;
short arr_1 [22] ;
unsigned int arr_3 [22] [22] ;
long long int arr_7 [22] ;
unsigned char arr_10 [22] ;
int arr_14 [22] ;
long long int arr_18 [22] [22] [22] ;
unsigned long long int arr_20 [22] [22] [22] ;
long long int arr_25 [22] [22] ;
unsigned long long int arr_26 [22] [22] [22] ;
unsigned short arr_50 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_2 [22] [22] ;
unsigned long long int arr_5 [22] [22] ;
unsigned long long int arr_6 [22] ;
short arr_15 [22] [22] ;
unsigned short arr_31 [22] [22] [22] [22] [22] ;
unsigned int arr_32 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_33 [22] [22] ;
_Bool arr_36 [22] ;
long long int arr_39 [22] [22] [22] ;
unsigned short arr_40 [22] [22] ;
unsigned short arr_41 [22] ;
short arr_47 [22] ;
int arr_52 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)18787;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)11338;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 4109189020U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3956197380727071500LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 1614106064;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -6673328822616019296LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 9886009804135445557ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_25 [i_0] [i_1] = -6127772345265706813LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 7610017962549718794ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned short)14101 : (unsigned short)43150;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 425194529U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 14150288900689636527ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 8730617201227987508ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-3458;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)10065;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3791815592U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 7745458870542604687LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)62832;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (unsigned short)31148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_47 [i_0] = (short)-24002;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_52 [i_0] = -796038570;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
