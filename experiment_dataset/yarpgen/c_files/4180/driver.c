#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31550;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 15785220707526114047ULL;
unsigned long long int var_4 = 3323773598199324762ULL;
unsigned short var_5 = (unsigned short)13634;
unsigned short var_6 = (unsigned short)17907;
unsigned int var_7 = 3524743861U;
unsigned int var_8 = 1830126072U;
long long int var_9 = 6750831334106330854LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-19437;
short var_12 = (short)-6466;
unsigned long long int var_13 = 16873799308148452782ULL;
unsigned int var_14 = 2732340919U;
long long int var_15 = -1990234258622750672LL;
long long int var_16 = 1509644373086811568LL;
long long int var_17 = -7610561908718944810LL;
unsigned long long int var_18 = 4983387088294795964ULL;
unsigned short var_19 = (unsigned short)63440;
signed char var_20 = (signed char)97;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
unsigned long long int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] ;
_Bool arr_4 [17] [17] [17] ;
unsigned int arr_5 [17] ;
long long int arr_10 [17] [17] [17] [17] ;
unsigned int arr_6 [17] ;
unsigned short arr_12 [17] [17] [17] ;
unsigned long long int arr_18 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2277790884U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2026331797U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 6772427457190585909ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 609909715098007733ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 1079749492U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -6802001321936783158LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3856387800U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)6153 : (unsigned short)38861;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 18307171894310700294ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
