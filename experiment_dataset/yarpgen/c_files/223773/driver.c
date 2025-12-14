#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1135616369U;
unsigned short var_1 = (unsigned short)47682;
unsigned char var_3 = (unsigned char)107;
signed char var_4 = (signed char)-80;
unsigned long long int var_5 = 10236918585813157444ULL;
_Bool var_6 = (_Bool)1;
int var_7 = -1153685106;
unsigned char var_8 = (unsigned char)219;
unsigned int var_10 = 510145524U;
short var_11 = (short)-14268;
short var_14 = (short)6175;
unsigned long long int var_15 = 5442913748792024071ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)22;
signed char var_18 = (signed char)-117;
long long int var_19 = 9064765465254510524LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
long long int var_22 = 3593210805362380994LL;
unsigned long long int var_23 = 3602653912718955970ULL;
short var_24 = (short)-20500;
long long int var_25 = -7907434948369201968LL;
signed char var_26 = (signed char)81;
_Bool arr_1 [19] ;
signed char arr_2 [19] ;
int arr_4 [19] [19] ;
unsigned short arr_5 [19] [19] [19] ;
short arr_7 [19] [19] [19] [19] ;
_Bool arr_9 [20] ;
unsigned long long int arr_10 [20] [20] ;
signed char arr_3 [19] ;
signed char arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -643697720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)22528;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)31705;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 15982092621932210114ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (signed char)-15;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
