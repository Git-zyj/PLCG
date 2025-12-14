#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -759932352;
int var_3 = -1305588272;
signed char var_4 = (signed char)98;
signed char var_5 = (signed char)-97;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)14;
int var_13 = 1992938291;
signed char var_14 = (signed char)105;
signed char var_15 = (signed char)-127;
unsigned short var_16 = (unsigned short)22352;
int zero = 0;
unsigned long long int var_18 = 7186553267473138976ULL;
signed char var_19 = (signed char)-43;
unsigned short var_20 = (unsigned short)17363;
int var_21 = 1039884808;
_Bool var_22 = (_Bool)1;
int var_23 = -631004399;
unsigned int var_24 = 3217921372U;
_Bool var_25 = (_Bool)1;
int var_26 = -1758440680;
unsigned char arr_0 [25] ;
int arr_6 [25] [25] ;
unsigned short arr_7 [25] ;
signed char arr_9 [25] [25] [25] [25] [25] ;
int arr_10 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 1473755454;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned short)10107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1437573417;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
