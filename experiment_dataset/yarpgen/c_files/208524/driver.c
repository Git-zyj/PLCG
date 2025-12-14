#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 968216635868580530ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -7172669060015657196LL;
long long int var_14 = 6698000130507289395LL;
unsigned char var_17 = (unsigned char)145;
int zero = 0;
unsigned int var_20 = 24837036U;
short var_21 = (short)19600;
int var_22 = -1933019519;
long long int var_23 = -3982497034406845996LL;
signed char var_24 = (signed char)25;
int var_25 = 319272589;
long long int var_26 = 3174521014769002865LL;
short var_27 = (short)-30845;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 2319975204U;
int var_30 = -1671412501;
long long int var_31 = 1504823653728770928LL;
unsigned int var_32 = 1337276543U;
signed char arr_0 [21] [21] ;
_Bool arr_1 [21] ;
signed char arr_2 [17] ;
int arr_4 [17] [17] ;
long long int arr_5 [17] [17] [17] ;
int arr_6 [17] [17] [17] ;
long long int arr_8 [17] ;
signed char arr_9 [17] [17] [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] [17] ;
short arr_13 [17] ;
short arr_21 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -1633170454;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2668391746417652819LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1066410725;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 8926018778558245696LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 9065102304418964732ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (short)4659;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (short)-8182;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
