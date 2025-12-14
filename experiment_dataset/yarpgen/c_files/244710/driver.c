#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7776050861717833823LL;
unsigned long long int var_1 = 6934873810398641053ULL;
unsigned short var_2 = (unsigned short)12916;
unsigned int var_3 = 2284853845U;
unsigned long long int var_4 = 2679495201433938274ULL;
long long int var_5 = -4468051028583962025LL;
unsigned long long int var_6 = 15599413768967915603ULL;
long long int var_7 = 507718434821754592LL;
long long int var_8 = -618823218312475184LL;
unsigned long long int var_9 = 14197920954651542071ULL;
int var_10 = -1475723740;
long long int var_11 = -7516714679130497172LL;
unsigned long long int var_12 = 11621326594762768693ULL;
long long int var_13 = -7464029966885330544LL;
int var_15 = 1116385355;
unsigned int var_16 = 3289634735U;
unsigned long long int var_17 = 3533992645872822094ULL;
int zero = 0;
int var_18 = 202516009;
long long int var_19 = 1834605366964405694LL;
long long int var_20 = -7156335544819371013LL;
unsigned long long int var_21 = 3067994958800589159ULL;
unsigned short var_22 = (unsigned short)46274;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 13376783665202965432ULL;
long long int var_25 = -3811807544186502655LL;
unsigned long long int var_26 = 6446795669247896346ULL;
unsigned long long int var_27 = 3923332123483124730ULL;
unsigned long long int var_28 = 5444656691503522358ULL;
long long int var_29 = -6137030578499587345LL;
unsigned int arr_0 [23] [23] ;
long long int arr_1 [23] ;
long long int arr_2 [23] ;
int arr_5 [15] [15] ;
unsigned long long int arr_7 [15] [15] ;
long long int arr_11 [15] [15] ;
unsigned long long int arr_3 [23] [23] ;
long long int arr_6 [15] [15] ;
unsigned int arr_20 [10] ;
unsigned long long int arr_21 [10] [10] [10] ;
long long int arr_28 [10] [10] [10] ;
unsigned long long int arr_29 [10] [10] [10] ;
unsigned long long int arr_30 [10] [10] ;
_Bool arr_31 [10] [10] [10] [10] ;
long long int arr_37 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 4205021830U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 984368404738074516LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 7949504811090470773LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -538829559;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 14657044982773050504ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 1052686614950987148LL : -1237730877711408039LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 10917797958723583417ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 2965557421321252729LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = 3902381130U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 5635339744323633908ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3190055612854030734LL : -545968383343781993LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 15405669827151060828ULL : 16765883201143680259ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? 11787496914521127ULL : 17321510722714971898ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_37 [i_0] [i_1] = 7225456059131276622LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
