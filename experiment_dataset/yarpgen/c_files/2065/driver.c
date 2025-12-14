#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62476;
long long int var_2 = -2516522466026709335LL;
unsigned short var_3 = (unsigned short)14603;
long long int var_5 = -4240941800864775059LL;
unsigned char var_6 = (unsigned char)240;
int var_7 = 1143344251;
long long int var_8 = 8031166847567886484LL;
long long int var_9 = 4836007952836113950LL;
int zero = 0;
long long int var_10 = 7888681041587647920LL;
unsigned long long int var_11 = 7370596860311486483ULL;
short var_12 = (short)-5941;
int var_13 = -1199984541;
unsigned long long int var_14 = 14664492946989067559ULL;
unsigned long long int var_15 = 5740440694149258373ULL;
unsigned long long int var_16 = 2918104852879518641ULL;
unsigned int var_17 = 1051644315U;
unsigned long long int var_18 = 7989420073929011432ULL;
unsigned long long int var_19 = 17036348713360952873ULL;
unsigned long long int var_20 = 17266250182742856437ULL;
unsigned int var_21 = 2516396621U;
signed char var_22 = (signed char)-77;
long long int arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
unsigned int arr_2 [22] ;
unsigned int arr_3 [22] [22] ;
unsigned int arr_5 [24] [24] ;
unsigned long long int arr_6 [24] ;
unsigned long long int arr_7 [24] ;
long long int arr_8 [24] ;
unsigned int arr_9 [24] ;
unsigned int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -3488877584935594574LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)3502;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 307303471U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3579125582U : 606575866U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 986053397U : 615139509U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 16457448408043066438ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 18073477652478201676ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 6022214571626445181LL : -8018625915002232517LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2099620601U : 1086037436U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 4203177771U : 2174201557U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
