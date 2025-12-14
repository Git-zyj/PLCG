#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33538;
signed char var_1 = (signed char)-29;
_Bool var_2 = (_Bool)1;
short var_3 = (short)32454;
unsigned long long int var_5 = 6631521273650235683ULL;
unsigned long long int var_7 = 18312649330341728055ULL;
int var_8 = -752023760;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 13040771663115934685ULL;
unsigned short var_13 = (unsigned short)6551;
int zero = 0;
signed char var_14 = (signed char)-19;
short var_15 = (short)1525;
unsigned char var_16 = (unsigned char)86;
int var_17 = 163302878;
unsigned char var_18 = (unsigned char)243;
unsigned long long int arr_5 [25] ;
unsigned long long int arr_6 [25] ;
unsigned int arr_7 [25] [25] [25] ;
unsigned long long int arr_8 [25] [25] ;
unsigned long long int arr_4 [11] ;
int arr_9 [25] [25] ;
unsigned long long int arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 6750544537467222343ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1571731252200350693ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3822007300U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 9855257677146398479ULL : 2378067444150802133ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 11887079321042273321ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 560216444 : 1094548009;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 14369476676442535431ULL : 17800965549466894589ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
