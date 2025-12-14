#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32045;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-17151;
int var_7 = 900769182;
unsigned char var_8 = (unsigned char)189;
_Bool var_9 = (_Bool)0;
int var_10 = 835826386;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)129;
unsigned short var_15 = (unsigned short)1694;
unsigned short var_17 = (unsigned short)22968;
int var_18 = 619261454;
int zero = 0;
unsigned long long int var_20 = 13911039470368552493ULL;
unsigned char var_21 = (unsigned char)200;
signed char var_22 = (signed char)78;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 68770919U;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-86;
unsigned long long int var_28 = 3763480493759074608ULL;
unsigned long long int var_29 = 14029440771632469513ULL;
short var_30 = (short)-5549;
unsigned long long int var_31 = 18133050653354064718ULL;
short var_32 = (short)836;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)65;
short var_35 = (short)-2759;
unsigned short var_36 = (unsigned short)6276;
unsigned long long int var_37 = 12657915758919258321ULL;
unsigned char var_38 = (unsigned char)19;
_Bool var_39 = (_Bool)1;
unsigned short var_40 = (unsigned short)8508;
_Bool var_41 = (_Bool)1;
int var_42 = -602603636;
long long int var_43 = -863327925600187594LL;
unsigned long long int var_44 = 18307571229722279390ULL;
unsigned long long int var_45 = 3424908426937651651ULL;
unsigned int var_46 = 689660472U;
short arr_0 [18] [18] ;
long long int arr_1 [18] ;
unsigned long long int arr_2 [25] ;
_Bool arr_3 [25] ;
short arr_4 [25] ;
unsigned char arr_6 [25] ;
signed char arr_7 [25] ;
unsigned char arr_8 [25] [25] [25] ;
int arr_9 [25] ;
_Bool arr_10 [25] [25] [25] [25] ;
_Bool arr_11 [25] [25] [25] [25] [25] ;
_Bool arr_15 [18] ;
short arr_18 [18] [18] ;
unsigned long long int arr_19 [18] [18] [18] [18] ;
unsigned long long int arr_20 [18] [18] [18] ;
_Bool arr_24 [18] [18] ;
signed char arr_25 [18] ;
int arr_26 [18] [18] [18] ;
unsigned char arr_27 [18] [18] [18] ;
unsigned char arr_29 [18] [18] [18] [18] [18] ;
unsigned char arr_30 [18] ;
_Bool arr_31 [18] [18] ;
unsigned int arr_34 [18] [18] ;
_Bool arr_32 [18] [18] [18] [18] ;
unsigned char arr_33 [18] ;
int arr_37 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-13708;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -3649503375193910514LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3365669843020228134ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-3222;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 1863946704;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (short)32040;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 4044532323275864616ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 18232286141526840290ULL : 12583600967938550216ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -2038999941;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)216 : (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_34 [i_0] [i_1] = 2183077379U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned char)253 : (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? -1575992124 : 1083858608;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
