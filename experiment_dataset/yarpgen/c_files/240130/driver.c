#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8005912047634855212ULL;
long long int var_1 = -4249565957507984862LL;
int var_3 = -1587742016;
int var_4 = 1042030472;
int var_5 = 283008969;
short var_6 = (short)-27828;
short var_8 = (short)-32488;
long long int var_9 = -4480434108577066024LL;
unsigned long long int var_10 = 12216961005065701632ULL;
short var_11 = (short)-9373;
int var_12 = -1485137689;
_Bool var_13 = (_Bool)0;
short var_14 = (short)8335;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = -7507686347300269058LL;
unsigned short var_17 = (unsigned short)64491;
int var_18 = 465266954;
unsigned long long int var_19 = 14852024842914176524ULL;
int arr_1 [20] ;
long long int arr_2 [20] [20] ;
unsigned long long int arr_11 [19] ;
_Bool arr_12 [19] ;
long long int arr_3 [20] ;
_Bool arr_7 [13] ;
_Bool arr_8 [13] [13] ;
long long int arr_13 [19] ;
unsigned char arr_14 [19] ;
unsigned long long int arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 19040453;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 6701802438592494676LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3482515926391562802ULL : 10422021215373270316ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3459763646611615627LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -7040977123257744626LL : 6288416911520772530LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 7023338981271324645ULL : 6079141298855932772ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
