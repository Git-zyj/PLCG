#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4760834518241403408LL;
unsigned char var_1 = (unsigned char)110;
unsigned short var_2 = (unsigned short)64822;
unsigned long long int var_3 = 9304189648711179632ULL;
short var_5 = (short)-22514;
long long int var_6 = -180213764898957633LL;
long long int var_8 = 6871608015999402199LL;
long long int var_9 = 7391250519326025168LL;
short var_11 = (short)8393;
long long int var_15 = -8506562009556404447LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)3739;
unsigned short var_18 = (unsigned short)32130;
int zero = 0;
unsigned char var_19 = (unsigned char)184;
long long int var_20 = -7853569143039320596LL;
int var_21 = -1988626082;
unsigned short arr_1 [21] [21] ;
short arr_4 [21] [21] ;
unsigned long long int arr_11 [25] ;
long long int arr_12 [25] ;
int arr_13 [25] ;
long long int arr_2 [21] ;
_Bool arr_3 [21] ;
int arr_6 [21] ;
short arr_9 [21] ;
unsigned long long int arr_10 [21] ;
unsigned long long int arr_14 [25] ;
signed char arr_15 [25] [25] ;
unsigned short arr_18 [15] ;
long long int arr_19 [15] ;
signed char arr_20 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)49579;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4594;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 13854896891422063840ULL : 14994966798106914326ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 7314649303143340451LL : 3262926428779325883LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1163608879 : -576950943;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 7992590516596526582LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 760707320;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)5649;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 12920873573782019393ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 16794583062876674819ULL : 4686878523885914818ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-111 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned short)53451;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = -1532689591110161329LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)-12;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
