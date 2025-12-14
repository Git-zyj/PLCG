#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52400;
signed char var_2 = (signed char)-90;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)13883;
signed char var_8 = (signed char)-26;
unsigned long long int var_11 = 11015994925463616744ULL;
long long int var_12 = -370926518709269604LL;
unsigned long long int var_13 = 5836956643571952171ULL;
long long int var_16 = 2320383752324247753LL;
signed char var_19 = (signed char)-70;
int zero = 0;
short var_20 = (short)21511;
short var_21 = (short)-9939;
int var_22 = 349451027;
int var_23 = 14152947;
long long int var_24 = 8368658270112754496LL;
signed char var_25 = (signed char)-12;
short var_26 = (short)-28277;
unsigned short var_27 = (unsigned short)64833;
unsigned long long int var_28 = 9028263704124785799ULL;
signed char var_29 = (signed char)-8;
unsigned short var_30 = (unsigned short)61284;
unsigned long long int var_31 = 568603752830002608ULL;
signed char var_32 = (signed char)14;
unsigned short var_33 = (unsigned short)3782;
unsigned short var_34 = (unsigned short)115;
unsigned short var_35 = (unsigned short)57818;
signed char var_36 = (signed char)108;
int var_37 = 213439828;
unsigned long long int var_38 = 9225579101080478348ULL;
unsigned long long int var_39 = 15424710404992008967ULL;
signed char var_40 = (signed char)-67;
unsigned short var_41 = (unsigned short)29355;
unsigned short var_42 = (unsigned short)26112;
signed char var_43 = (signed char)-123;
unsigned char arr_2 [12] ;
unsigned int arr_6 [12] [12] [12] ;
long long int arr_10 [12] ;
signed char arr_16 [13] [13] ;
unsigned int arr_17 [13] ;
long long int arr_19 [13] [13] [13] ;
unsigned long long int arr_20 [13] [13] ;
unsigned int arr_29 [13] [13] ;
_Bool arr_30 [13] ;
_Bool arr_45 [16] ;
unsigned short arr_46 [16] [16] ;
signed char arr_47 [16] ;
unsigned long long int arr_48 [16] [16] [16] ;
_Bool arr_50 [16] [16] [16] ;
int arr_51 [16] [16] [16] [16] ;
unsigned char arr_60 [16] [16] [16] [16] ;
unsigned long long int arr_64 [16] [16] [16] [16] ;
unsigned long long int arr_12 [12] [12] [12] [12] [12] ;
short arr_13 [12] [12] [12] [12] ;
signed char arr_14 [12] [12] [12] [12] ;
unsigned short arr_15 [12] [12] [12] [12] ;
signed char arr_18 [13] ;
int arr_21 [13] [13] ;
_Bool arr_22 [13] [13] ;
signed char arr_25 [13] [13] [13] ;
long long int arr_26 [13] ;
unsigned long long int arr_31 [13] ;
unsigned long long int arr_43 [13] ;
long long int arr_72 [16] [16] [16] [16] [16] ;
unsigned long long int arr_76 [16] [16] [16] ;
unsigned int arr_77 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)222 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 578470823U : 2663228747U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 6654671441759385244LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 1873187014U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1343034252535277168LL : 5779540691902397065LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 6940267699703749686ULL : 13322193384738073955ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? 3235879334U : 2069309581U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_46 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)12213 : (unsigned short)42554;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 11631232564958918075ULL : 2852937676728909807ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 596049125 : -1369128288;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)139 : (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = 16894381960277655498ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 6120344532978509852ULL : 6896489729130974564ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-28327 : (short)7612;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-109 : (signed char)-117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)40456 : (unsigned short)43732;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? -1993388773 : 1623076787;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-80 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = -109937258771273238LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 12601745783324552267ULL : 1225492568049138913ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? 2072093139984035819ULL : 7376369779159001902ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -560279731696305773LL : -2362779968604847553LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_76 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 13119704097543462506ULL : 17784947844370041228ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_77 [i_0] [i_1] = (i_0 % 2 == 0) ? 3182745583U : 1596537966U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_72 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_76 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_77 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
