#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7080537614879935673LL;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)46;
unsigned short var_4 = (unsigned short)44264;
unsigned long long int var_5 = 15031338418194510999ULL;
unsigned char var_6 = (unsigned char)58;
int var_7 = -2114878444;
unsigned long long int var_9 = 627623103305775038ULL;
int var_10 = -219344690;
_Bool var_12 = (_Bool)0;
long long int var_13 = -4822414215189620703LL;
int var_14 = 417264760;
unsigned int var_15 = 3828634354U;
signed char var_16 = (signed char)-44;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)14706;
long long int var_19 = 4291595598559213509LL;
unsigned char var_20 = (unsigned char)161;
unsigned char var_21 = (unsigned char)168;
int var_22 = 1263236439;
unsigned short var_23 = (unsigned short)49669;
long long int var_24 = 6436199269616911382LL;
int var_25 = 1831842305;
unsigned char var_26 = (unsigned char)109;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)53;
unsigned long long int var_29 = 2093614564001332930ULL;
unsigned char var_30 = (unsigned char)11;
unsigned long long int var_31 = 1013886411417901971ULL;
short arr_0 [16] ;
unsigned int arr_2 [16] [16] [16] ;
_Bool arr_3 [16] [16] ;
unsigned long long int arr_9 [19] [19] ;
long long int arr_10 [19] [19] ;
int arr_12 [19] ;
unsigned short arr_14 [19] ;
unsigned long long int arr_15 [19] [19] ;
short arr_16 [19] [19] ;
unsigned int arr_18 [19] [19] [19] [19] ;
int arr_6 [16] [16] [16] [16] ;
unsigned long long int arr_7 [16] [16] ;
short arr_21 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)-16335;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1471232588U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 14698347625448321551ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 7195641880019318947LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 1114606893;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned short)32211;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 15873870516726310433ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-10227 : (short)20273;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1173234960U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 55272829 : -2036007671;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 5334896365350197065ULL : 6959709282255592625ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)2590 : (short)-27567;
}

void checksum() {
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
