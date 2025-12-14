#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 122518692U;
unsigned int var_1 = 3901266806U;
int var_2 = -948640227;
unsigned short var_4 = (unsigned short)13792;
unsigned int var_5 = 399181376U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = 1534973644;
unsigned int var_10 = 1734253189U;
unsigned int var_11 = 2014475951U;
int zero = 0;
int var_12 = 38495233;
unsigned int var_13 = 446828439U;
unsigned long long int var_14 = 10513498384441147194ULL;
short var_15 = (short)-15235;
unsigned long long int var_16 = 8401256612746883537ULL;
unsigned long long int var_17 = 2500792233891252020ULL;
int var_18 = -1235763068;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7054093590708601714LL;
unsigned long long int var_21 = 10433078156822015435ULL;
long long int var_22 = 8448797115150069961LL;
_Bool var_23 = (_Bool)0;
short arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
unsigned int arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] ;
long long int arr_6 [18] ;
long long int arr_7 [18] ;
unsigned char arr_9 [24] ;
_Bool arr_10 [24] [24] ;
short arr_13 [24] [24] ;
unsigned int arr_14 [24] [24] [24] ;
unsigned int arr_2 [18] ;
unsigned char arr_5 [18] [18] ;
short arr_8 [18] [18] ;
short arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-28658 : (short)-29196;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 803859953U : 1753700801U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1882815379U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 3715127148U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 8445222656084180369LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -3497712089468751760LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-30969;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 2220108882U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3183754097U : 1136848882U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-24340;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-28970;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
