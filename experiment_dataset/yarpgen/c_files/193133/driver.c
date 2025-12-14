#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1239574803;
int var_1 = 1590459640;
short var_2 = (short)934;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)5397;
long long int var_6 = 4701894592395704426LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)61128;
unsigned long long int var_9 = 11775668624096810670ULL;
unsigned int var_11 = 1017642042U;
_Bool var_12 = (_Bool)1;
long long int var_13 = 3871307927793057540LL;
unsigned int var_14 = 1135670586U;
long long int var_15 = -5727678780244522379LL;
int zero = 0;
long long int var_16 = -6696806455822257805LL;
signed char var_17 = (signed char)-56;
int var_18 = 1249602960;
unsigned char var_19 = (unsigned char)94;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int arr_0 [15] ;
long long int arr_1 [15] ;
unsigned short arr_3 [15] [15] [15] ;
_Bool arr_5 [15] ;
long long int arr_6 [15] [15] [15] [15] ;
long long int arr_7 [15] [15] [15] ;
_Bool arr_11 [15] [15] [15] ;
long long int arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 304692987U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2674892903623179517LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)43526 : (unsigned short)33128;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 7730604308145890012LL : 2900307919593235724LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -6161497060328083068LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 3488782307897910841LL : 7377000599207851757LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
