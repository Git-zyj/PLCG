#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -585824606906963296LL;
unsigned char var_1 = (unsigned char)20;
unsigned long long int var_2 = 3815602397839482657ULL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8346529607155507628LL;
signed char var_6 = (signed char)88;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-35;
signed char var_10 = (signed char)110;
long long int var_11 = -9202950162677573649LL;
_Bool var_12 = (_Bool)0;
long long int var_14 = -2361950097433894843LL;
unsigned char var_15 = (unsigned char)211;
int var_16 = -1002328015;
long long int var_17 = 8162540736600597066LL;
_Bool var_18 = (_Bool)0;
int var_19 = -1542011000;
int zero = 0;
long long int var_20 = -1175552488335446873LL;
unsigned long long int var_21 = 12435455644524519738ULL;
int var_22 = -155676095;
signed char var_23 = (signed char)-37;
signed char var_24 = (signed char)-124;
unsigned char var_25 = (unsigned char)12;
unsigned int var_26 = 3922456457U;
unsigned long long int var_27 = 7067277532243414644ULL;
int var_28 = 448084504;
unsigned long long int var_29 = 13433819319341750878ULL;
unsigned long long int var_30 = 12931727182531755017ULL;
int var_31 = -1415385801;
int var_32 = 992179057;
short var_33 = (short)-18418;
short var_34 = (short)-15717;
long long int var_35 = 5715752327035577160LL;
unsigned long long int var_36 = 14235430631697525046ULL;
unsigned int var_37 = 289966337U;
unsigned short var_38 = (unsigned short)42574;
_Bool var_39 = (_Bool)1;
signed char var_40 = (signed char)9;
_Bool var_41 = (_Bool)1;
signed char var_42 = (signed char)29;
unsigned long long int var_43 = 2630758002921824634ULL;
unsigned char var_44 = (unsigned char)159;
long long int var_45 = -8859034431664142623LL;
_Bool arr_1 [23] [23] ;
long long int arr_3 [23] ;
int arr_6 [23] [23] ;
_Bool arr_10 [13] [13] [13] ;
unsigned long long int arr_11 [13] [13] ;
unsigned int arr_12 [13] ;
unsigned long long int arr_13 [13] [13] [13] ;
signed char arr_16 [13] [13] [13] [13] ;
unsigned int arr_18 [13] ;
int arr_21 [13] [13] [13] [13] [13] [13] [13] ;
_Bool arr_24 [13] ;
unsigned long long int arr_25 [11] [11] ;
int arr_26 [11] ;
int arr_29 [11] [11] ;
long long int arr_2 [23] ;
unsigned long long int arr_22 [13] [13] [13] [13] [13] [13] ;
long long int arr_41 [11] [11] [11] [11] [11] ;
_Bool arr_42 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -2064855560434276502LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -911666287;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 9295026926341202461ULL : 8262095203796906276ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2242133745U : 3211786948U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 9777881410427995936ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-58 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = 897837527U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 1836655268 : 1425899585;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_25 [i_0] [i_1] = 14123420790211906693ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = -680922447;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = -845605461;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -4433249697337389021LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 9693682211783152979ULL : 18412599728752853500ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = -6422814246103582305LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
