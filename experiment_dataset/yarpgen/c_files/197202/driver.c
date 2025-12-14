#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1738577957U;
unsigned char var_1 = (unsigned char)103;
short var_2 = (short)22999;
unsigned long long int var_4 = 3078936803919936879ULL;
unsigned long long int var_5 = 16481292354223793384ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3620919309U;
unsigned char var_8 = (unsigned char)217;
long long int var_9 = -1575869186042080918LL;
int var_10 = -258051112;
unsigned long long int var_11 = 13111231014423227765ULL;
int var_12 = -566653097;
unsigned char var_13 = (unsigned char)187;
unsigned long long int var_14 = 17610161909274576838ULL;
int zero = 0;
long long int var_15 = -3309051957913764375LL;
unsigned char var_16 = (unsigned char)14;
unsigned short var_17 = (unsigned short)47010;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2341705995519006740ULL;
unsigned long long int arr_0 [23] ;
_Bool arr_1 [23] [23] ;
signed char arr_2 [23] ;
unsigned short arr_4 [23] [23] [23] ;
unsigned short arr_5 [23] [23] ;
long long int arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 11543654064008437598ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)12194 : (unsigned short)9878;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49092 : (unsigned short)7830;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2522734117687513663LL : -1330395031909978863LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)240 : (unsigned char)89;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
