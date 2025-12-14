#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1573393188;
int var_3 = -1452808749;
long long int var_4 = 7519878551124906388LL;
unsigned long long int var_6 = 130546856436720307ULL;
unsigned long long int var_7 = 14526192324329568292ULL;
unsigned long long int var_8 = 3918064091810960538ULL;
long long int var_9 = 4741637515514184175LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)235;
unsigned short var_12 = (unsigned short)11708;
unsigned char var_13 = (unsigned char)238;
unsigned short var_14 = (unsigned short)8788;
unsigned long long int var_15 = 14169863763356277606ULL;
unsigned long long int var_16 = 7516472129394830233ULL;
unsigned int var_17 = 2368667243U;
unsigned long long int var_18 = 3633241521977744957ULL;
short var_19 = (short)24413;
int var_20 = -529760133;
unsigned int var_21 = 799120222U;
unsigned short var_22 = (unsigned short)51944;
signed char var_23 = (signed char)-121;
short var_24 = (short)-15446;
int var_25 = 597036306;
unsigned short var_26 = (unsigned short)63778;
unsigned short var_27 = (unsigned short)40041;
unsigned long long int arr_5 [18] [18] [18] ;
signed char arr_8 [18] [18] [18] [18] ;
int arr_9 [18] [18] [18] ;
signed char arr_11 [21] ;
int arr_14 [21] [21] ;
unsigned char arr_17 [21] [21] [21] [21] ;
signed char arr_18 [21] [21] [21] ;
unsigned int arr_19 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3170096194509356241ULL : 9596226625629712961ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -991288991 : -230533860;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = -1606367733;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)64 : (signed char)64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = 2365272525U;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
