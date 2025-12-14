#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15876;
unsigned char var_6 = (unsigned char)98;
short var_10 = (short)13329;
unsigned long long int var_11 = 5808349521689114214ULL;
signed char var_13 = (signed char)28;
signed char var_16 = (signed char)-53;
int zero = 0;
unsigned int var_17 = 3021570665U;
int var_18 = -1821699070;
int var_19 = 1881681119;
unsigned short var_20 = (unsigned short)65132;
int var_21 = 1941632112;
unsigned int var_22 = 2498676939U;
unsigned long long int arr_1 [10] ;
unsigned short arr_4 [10] [10] [10] ;
signed char arr_11 [14] ;
unsigned int arr_12 [14] ;
int arr_2 [10] ;
unsigned short arr_9 [10] [10] ;
signed char arr_10 [10] ;
short arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8283792441585731681ULL : 16495566278653397980ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)20513;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = 3575546038U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -816845642 : 1036451904;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)45399 : (unsigned short)45848;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)90 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (short)-5061;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
