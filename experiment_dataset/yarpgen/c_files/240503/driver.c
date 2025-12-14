#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5361119425560576387ULL;
unsigned int var_7 = 3408133638U;
long long int var_11 = -7842023937372673387LL;
int var_12 = -1673018364;
int zero = 0;
unsigned long long int var_13 = 5927553371321797688ULL;
int var_14 = 172447251;
signed char var_15 = (signed char)-110;
long long int var_16 = -1856988088641471401LL;
unsigned long long int var_17 = 231792243237881445ULL;
long long int var_18 = -1033391522952765937LL;
int var_19 = 1925366508;
long long int var_20 = 3446425293738582713LL;
unsigned int var_21 = 886437075U;
signed char var_22 = (signed char)-86;
unsigned int var_23 = 1196720011U;
unsigned int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] [13] ;
long long int arr_2 [13] ;
long long int arr_5 [13] [13] ;
unsigned long long int arr_6 [13] [13] ;
unsigned long long int arr_7 [13] ;
unsigned int arr_8 [13] ;
unsigned int arr_12 [13] [13] ;
unsigned long long int arr_13 [13] [13] [13] [13] ;
int arr_15 [13] ;
long long int arr_17 [13] [13] [13] [13] ;
int arr_19 [23] ;
int arr_21 [23] [23] ;
signed char arr_22 [23] ;
unsigned int arr_24 [23] ;
unsigned int arr_27 [23] [23] ;
unsigned int arr_28 [23] [23] ;
unsigned int arr_29 [23] [23] [23] [23] [23] ;
int arr_3 [13] [13] ;
int arr_18 [13] ;
signed char arr_23 [23] [23] ;
long long int arr_31 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2639866197U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 10414444464090354503ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2875341048139415956LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 5330549938829927178LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 7318754167795041831ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 14764450520791026630ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 150256725U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 3455791344U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 13172980367533471240ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = -647632812;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 5739127062997157231LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = 1854540835;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? -1302124705 : 1761097091;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)-52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = 1540484062U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = 1003246833U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 1251987400U : 1361829840U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 4059536477U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -993300252;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = -952988326;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-120 : (signed char)91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -7361939372594159108LL : -8778407044229876815LL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
