#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
signed char var_2 = (signed char)106;
int var_6 = -948413270;
signed char var_8 = (signed char)-64;
signed char var_9 = (signed char)40;
unsigned short var_10 = (unsigned short)20959;
long long int var_12 = 9136377591577337365LL;
int zero = 0;
signed char var_13 = (signed char)99;
short var_14 = (short)-22017;
unsigned int var_15 = 3969566391U;
signed char var_16 = (signed char)25;
unsigned long long int var_17 = 12325718294074831186ULL;
unsigned int arr_0 [20] ;
signed char arr_1 [20] ;
signed char arr_2 [20] [20] ;
long long int arr_3 [20] ;
short arr_4 [20] ;
unsigned short arr_6 [20] [20] [20] [20] [20] ;
unsigned short arr_9 [20] ;
unsigned long long int arr_10 [20] [20] ;
unsigned short arr_11 [20] [20] [20] [20] [20] ;
short arr_12 [20] [20] [20] [20] [20] ;
int arr_19 [10] ;
signed char arr_23 [10] [10] [10] [10] ;
signed char arr_13 [20] [20] ;
unsigned short arr_14 [20] [20] ;
unsigned char arr_15 [20] ;
signed char arr_21 [10] [10] [10] ;
unsigned int arr_29 [10] [10] [10] [10] ;
short arr_30 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3247570620U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -7866674406319621121LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)26538;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)33865;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned short)27290;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 4510500705893768110ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)55800;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)16173;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = 1057982479;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)109 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)6367;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1846663860U : 894312865U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-30714 : (short)2864;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
