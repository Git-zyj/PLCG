#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-50;
long long int var_3 = -4544513948202832640LL;
signed char var_4 = (signed char)6;
int var_8 = -760929296;
unsigned long long int var_10 = 16749534119482580694ULL;
signed char var_11 = (signed char)-3;
short var_12 = (short)-23282;
short var_13 = (short)23195;
int zero = 0;
int var_16 = 1073268075;
unsigned long long int var_17 = 3530792497625391058ULL;
signed char var_18 = (signed char)-90;
_Bool var_19 = (_Bool)1;
short var_20 = (short)19608;
signed char var_21 = (signed char)-15;
unsigned int arr_0 [12] ;
short arr_1 [12] ;
signed char arr_2 [12] ;
unsigned long long int arr_4 [12] ;
short arr_5 [12] [12] ;
short arr_7 [12] [12] [12] [12] ;
int arr_8 [12] [12] ;
long long int arr_10 [10] [10] ;
short arr_11 [10] ;
short arr_9 [12] [12] [12] [12] ;
int arr_14 [10] [10] ;
unsigned char arr_15 [10] ;
unsigned int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3227854852U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-3282;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 8328543590859249559ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-12765;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)11953;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 606090429;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -5522684483492599789LL : -274524571808494001LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-19489 : (short)-28772;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-15816;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? -779793918 : 332712157;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)153 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 4267377887U : 209360075U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
