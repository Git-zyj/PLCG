#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1790675011564749392LL;
unsigned short var_2 = (unsigned short)58728;
short var_4 = (short)11112;
signed char var_5 = (signed char)17;
signed char var_6 = (signed char)65;
long long int var_8 = -3828666755735752148LL;
int var_9 = -225909659;
short var_11 = (short)-12281;
unsigned short var_13 = (unsigned short)60886;
unsigned long long int var_14 = 11082957159060860440ULL;
int zero = 0;
signed char var_15 = (signed char)-81;
int var_16 = 1695760840;
long long int var_17 = -4601832737431161329LL;
unsigned short var_18 = (unsigned short)25504;
unsigned long long int var_19 = 1898831451600489656ULL;
signed char var_20 = (signed char)30;
unsigned long long int var_21 = 3677967230517213239ULL;
unsigned short var_22 = (unsigned short)6197;
signed char var_23 = (signed char)87;
long long int arr_0 [19] ;
int arr_1 [19] ;
unsigned short arr_4 [19] [19] [19] ;
unsigned long long int arr_6 [21] ;
unsigned long long int arr_7 [21] ;
signed char arr_9 [21] ;
unsigned int arr_11 [21] [21] ;
long long int arr_5 [19] [19] [19] ;
long long int arr_12 [21] [21] [21] [21] ;
int arr_13 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8348516191245745464LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 352542457;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)38854;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 15941620956127987881ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 4571727252857907873ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 1432982378U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -8939193797276173658LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4323262794904180897LL : 5872414578757823204LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 2094713982 : -635252326;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
