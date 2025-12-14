#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -649694832;
signed char var_2 = (signed char)-95;
unsigned short var_3 = (unsigned short)50373;
unsigned char var_6 = (unsigned char)147;
unsigned int var_8 = 1090358243U;
short var_10 = (short)16757;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1659235088U;
unsigned long long int var_13 = 17203064015947641175ULL;
signed char var_14 = (signed char)-110;
int zero = 0;
unsigned int var_15 = 429046385U;
unsigned short var_16 = (unsigned short)20869;
signed char var_17 = (signed char)-30;
unsigned int var_18 = 399061097U;
short var_19 = (short)-4448;
unsigned int var_20 = 3522197948U;
int var_21 = 443689881;
unsigned char var_22 = (unsigned char)209;
unsigned char var_23 = (unsigned char)35;
unsigned char var_24 = (unsigned char)116;
signed char var_25 = (signed char)66;
long long int var_26 = -3968575635789004828LL;
unsigned short var_27 = (unsigned short)39181;
int var_28 = -1088027283;
unsigned short var_29 = (unsigned short)50010;
unsigned short var_30 = (unsigned short)16507;
int var_31 = 1669813988;
unsigned char var_32 = (unsigned char)250;
unsigned long long int arr_0 [19] ;
unsigned int arr_1 [19] ;
short arr_2 [15] [15] ;
unsigned int arr_3 [15] ;
unsigned long long int arr_4 [15] [15] ;
_Bool arr_10 [15] [15] [15] [15] ;
unsigned long long int arr_11 [15] [15] [15] ;
signed char arr_12 [15] [15] [15] [15] [15] ;
unsigned char arr_14 [19] ;
long long int arr_15 [19] ;
short arr_16 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10607804207398830011ULL : 6818277584780403878ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2344931687U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-26449;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3655337219U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 16085646232669358120ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14702917848399975303ULL : 1733897239842527566ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-75 : (signed char)121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = -599863607177684701LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (short)-15233;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
