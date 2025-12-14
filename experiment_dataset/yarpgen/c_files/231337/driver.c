#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5070346976618840288LL;
short var_2 = (short)22788;
int var_4 = -399170946;
int var_6 = 859005484;
long long int var_10 = 6245283259512394259LL;
unsigned long long int var_11 = 12836183588916810853ULL;
long long int var_13 = 2736744624868177598LL;
long long int var_19 = -4664756303136720522LL;
int zero = 0;
short var_20 = (short)-25331;
unsigned char var_21 = (unsigned char)142;
long long int var_22 = 4295977062561725773LL;
_Bool var_23 = (_Bool)1;
int var_24 = -1434696676;
unsigned short var_25 = (unsigned short)48281;
signed char var_26 = (signed char)39;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-105;
signed char var_30 = (signed char)11;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)2225;
long long int var_34 = -982572055469882556LL;
short var_35 = (short)21093;
int var_36 = 962189590;
int var_37 = 551233611;
_Bool var_38 = (_Bool)0;
int var_39 = 1150658036;
long long int var_40 = -4361790266846799420LL;
signed char var_41 = (signed char)121;
long long int var_42 = 2371357576761430489LL;
int var_43 = -1968570581;
_Bool var_44 = (_Bool)0;
_Bool var_45 = (_Bool)0;
signed char arr_1 [16] ;
unsigned char arr_2 [16] [16] [16] ;
signed char arr_3 [16] [16] [16] ;
unsigned int arr_5 [16] [16] ;
unsigned long long int arr_6 [16] [16] ;
_Bool arr_7 [16] [16] [16] [16] ;
signed char arr_9 [21] ;
unsigned long long int arr_10 [21] ;
_Bool arr_15 [19] ;
unsigned short arr_17 [19] [19] ;
signed char arr_18 [19] [19] [19] ;
short arr_19 [19] [19] ;
unsigned short arr_20 [19] [19] ;
signed char arr_23 [19] [19] [19] ;
_Bool arr_24 [19] [19] ;
_Bool arr_25 [19] [19] [19] ;
unsigned short arr_27 [19] [19] [19] ;
int arr_28 [19] [19] [19] ;
_Bool arr_29 [19] ;
short arr_34 [19] [19] [19] [19] [19] ;
signed char arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-109 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)13 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)61 : (signed char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 3165802867U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 17989641396349210840ULL : 12621914717179645270ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 2535577843895082446ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)64062 : (unsigned short)20055;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = (short)27020;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19330 : (unsigned short)37009;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-45 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)54713 : (unsigned short)38322;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -309537702 : 1148731876;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-842 : (short)-14782;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)35 : (signed char)105;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
