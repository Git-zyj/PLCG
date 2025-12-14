#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4190779789246968273LL;
unsigned long long int var_1 = 18076855841182186401ULL;
long long int var_2 = 6976999963821286767LL;
short var_3 = (short)-5514;
unsigned int var_4 = 2483201451U;
int var_5 = -1800156137;
short var_6 = (short)22609;
unsigned int var_8 = 981069698U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)89;
unsigned int var_11 = 2372149787U;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int var_15 = -190193266;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3610434890U;
unsigned long long int var_19 = 12083846111216837991ULL;
unsigned int var_20 = 3440852638U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 12856992087417481022ULL;
unsigned int var_23 = 2134377473U;
signed char var_24 = (signed char)-125;
unsigned int var_25 = 938890520U;
unsigned long long int var_26 = 15487368900641444298ULL;
int var_27 = 777981977;
long long int arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
signed char arr_2 [17] [17] ;
unsigned int arr_6 [10] [10] [10] ;
unsigned long long int arr_9 [10] ;
unsigned int arr_10 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_13 [10] [10] ;
unsigned int arr_17 [21] ;
int arr_18 [21] ;
signed char arr_19 [21] ;
unsigned int arr_21 [21] ;
long long int arr_23 [21] ;
signed char arr_25 [21] [21] [21] ;
unsigned int arr_28 [21] [21] [21] [21] ;
unsigned int arr_30 [21] [21] [21] [21] ;
unsigned char arr_31 [21] [21] [21] [21] ;
int arr_3 [17] [17] ;
unsigned long long int arr_12 [10] [10] [10] [10] [10] ;
unsigned int arr_15 [10] [10] [10] ;
unsigned int arr_16 [10] ;
unsigned short arr_20 [21] ;
unsigned short arr_32 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -4855286227646871136LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1462279624U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4096374920U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 16599493868585448078ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2616669292U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 3967494006U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 3486151155U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 2142236122;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 93258547U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = -2707408535804281594LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2974956573U : 3323558448U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 4282933658U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -2027757975;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 11678751613899831163ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 3562541224U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 3889994889U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned short)28360;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = (unsigned short)44306;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
