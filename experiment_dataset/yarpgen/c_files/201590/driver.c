#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)61;
int var_2 = -1208190895;
int var_3 = 1896716631;
signed char var_4 = (signed char)109;
unsigned short var_5 = (unsigned short)35477;
long long int var_6 = 3762686873236574024LL;
unsigned char var_9 = (unsigned char)126;
unsigned long long int var_10 = 10395062050872860358ULL;
unsigned long long int var_11 = 5140419739182071380ULL;
unsigned char var_12 = (unsigned char)248;
unsigned long long int var_13 = 12321631983001628756ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6946685269356708885LL;
int zero = 0;
unsigned int var_16 = 3911784090U;
unsigned long long int var_17 = 13054584885242816606ULL;
unsigned long long int var_18 = 17428749083233164988ULL;
int var_19 = 1665458375;
unsigned long long int var_20 = 6525764404501122057ULL;
_Bool arr_3 [18] ;
int arr_4 [18] [18] ;
long long int arr_7 [18] [18] ;
unsigned char arr_8 [18] ;
unsigned char arr_9 [18] [18] ;
int arr_10 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -1326848322;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1481316927421934539LL : -1018718355699708437LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)213 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)92 : (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -1354271669 : 2076098740;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
