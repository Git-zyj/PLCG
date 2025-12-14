#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8945;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 653357103U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-7593;
unsigned long long int var_6 = 8024761821959822592ULL;
unsigned int var_7 = 3658153460U;
unsigned short var_8 = (unsigned short)56254;
unsigned int var_9 = 714981406U;
short var_10 = (short)-2228;
int zero = 0;
unsigned char var_11 = (unsigned char)22;
unsigned int var_12 = 215535695U;
unsigned int var_13 = 2542178393U;
unsigned char var_14 = (unsigned char)79;
int var_15 = -682664605;
short var_16 = (short)-18763;
long long int var_17 = 6675198192717258796LL;
unsigned char var_18 = (unsigned char)154;
unsigned long long int var_19 = 16893416408972750095ULL;
unsigned int var_20 = 2235339243U;
short var_21 = (short)-19378;
unsigned char var_22 = (unsigned char)201;
unsigned int var_23 = 1331049723U;
int var_24 = 1379249040;
unsigned int var_25 = 2854523890U;
unsigned short var_26 = (unsigned short)8913;
unsigned long long int var_27 = 10784137030732139816ULL;
unsigned int var_28 = 3369261310U;
short var_29 = (short)21833;
unsigned long long int var_30 = 14632156297520539165ULL;
long long int arr_0 [15] [15] ;
signed char arr_1 [15] ;
unsigned long long int arr_2 [15] ;
_Bool arr_3 [14] ;
_Bool arr_4 [14] ;
unsigned int arr_6 [14] ;
unsigned int arr_7 [14] ;
unsigned char arr_8 [14] ;
short arr_9 [14] ;
short arr_11 [14] ;
unsigned long long int arr_13 [14] [14] ;
signed char arr_15 [14] [14] [14] ;
unsigned short arr_17 [14] [14] [14] [14] ;
unsigned char arr_18 [14] [14] ;
unsigned long long int arr_20 [14] [14] [14] ;
unsigned int arr_23 [14] [14] ;
unsigned char arr_5 [14] ;
unsigned long long int arr_12 [14] [14] ;
int arr_21 [14] [14] [14] [14] ;
unsigned char arr_22 [14] ;
unsigned long long int arr_27 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -7534384061615050488LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 17575577948430476960ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 2698227842U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1947724650U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (short)9279;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (short)-25543;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 5029967875599114092ULL : 16753688293070612931ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)12196;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1306788182966141258ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = 3613911317U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 11657278638012532062ULL : 6451720915757905816ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1806287746 : -1350547375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 10218963756113663473ULL : 7196963317706256434ULL;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
