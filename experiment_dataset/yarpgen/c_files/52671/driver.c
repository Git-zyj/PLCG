#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_17 = (unsigned short)7163;
unsigned long long int var_18 = 7552453475092736691ULL;
signed char var_19 = (signed char)-15;
signed char var_20 = (signed char)10;
signed char var_21 = (signed char)30;
signed char var_22 = (signed char)-29;
unsigned long long int var_23 = 13761304204161516244ULL;
signed char var_24 = (signed char)106;
unsigned long long int var_25 = 9237426069624080925ULL;
unsigned long long int arr_0 [10] [10] ;
int arr_1 [10] [10] ;
unsigned char arr_3 [21] ;
unsigned short arr_4 [21] ;
signed char arr_5 [21] ;
unsigned char arr_6 [21] ;
unsigned short arr_2 [10] ;
int arr_7 [21] ;
int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 11565285491634385331ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1385557173;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)780 : (unsigned short)42360;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)60478;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1379079986 : -434245426;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -527826672 : -785559170;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
