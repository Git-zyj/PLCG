#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
long long int var_1 = -2269317086772172526LL;
unsigned long long int var_3 = 15404548578502008135ULL;
long long int var_4 = -4440555139206029141LL;
int var_6 = -1674058377;
unsigned int var_7 = 844693242U;
unsigned short var_8 = (unsigned short)33352;
unsigned char var_9 = (unsigned char)148;
unsigned short var_10 = (unsigned short)56910;
long long int var_12 = -5470593432886538164LL;
unsigned int var_13 = 3796788341U;
unsigned int var_14 = 3990799868U;
unsigned int var_15 = 2164651390U;
int zero = 0;
unsigned char var_16 = (unsigned char)251;
unsigned char var_17 = (unsigned char)208;
short var_18 = (short)-2019;
signed char var_19 = (signed char)11;
unsigned int var_20 = 1626436795U;
unsigned short var_21 = (unsigned short)29770;
short arr_0 [12] ;
int arr_1 [12] ;
unsigned int arr_2 [12] [12] [12] ;
unsigned char arr_3 [12] ;
unsigned long long int arr_7 [12] [12] [12] [12] [12] [12] ;
unsigned short arr_8 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-26737;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 271441746;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 458657679U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4558494209092698115ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)60443;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
