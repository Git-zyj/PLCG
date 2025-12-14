#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26977;
signed char var_1 = (signed char)40;
long long int var_3 = -467644211738405378LL;
unsigned char var_4 = (unsigned char)57;
signed char var_6 = (signed char)22;
unsigned long long int var_7 = 15247706683910574176ULL;
unsigned int var_8 = 3407931861U;
long long int var_11 = 5244214065119807591LL;
unsigned long long int var_12 = 3129955233022414685ULL;
long long int var_14 = 112771862895303543LL;
int zero = 0;
unsigned char var_19 = (unsigned char)124;
long long int var_20 = -129934953650810999LL;
short var_21 = (short)11684;
long long int var_22 = -7036908764302276691LL;
short var_23 = (short)2862;
long long int arr_0 [16] ;
short arr_1 [16] ;
unsigned short arr_2 [16] [16] [16] ;
unsigned short arr_3 [16] [16] [16] ;
unsigned short arr_6 [19] [19] ;
unsigned short arr_7 [19] ;
signed char arr_8 [19] [19] [19] ;
unsigned short arr_9 [19] ;
short arr_11 [19] ;
unsigned short arr_5 [16] [16] [16] ;
long long int arr_12 [19] [19] ;
short arr_13 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -2878457242255317046LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)19092;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)32090;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)18847;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)59505;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned short)15470;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)49849;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (short)-26671;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)21757;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = -2262272008346883266LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)17519;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
