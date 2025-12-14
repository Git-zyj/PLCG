#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned long long int var_2 = 2094232937208073161ULL;
unsigned char var_3 = (unsigned char)110;
unsigned short var_5 = (unsigned short)49928;
unsigned long long int var_6 = 10680580332370979765ULL;
unsigned long long int var_7 = 18223223266863709317ULL;
unsigned char var_11 = (unsigned char)202;
signed char var_12 = (signed char)7;
int var_13 = 221999470;
short var_15 = (short)24408;
signed char var_16 = (signed char)-54;
signed char var_18 = (signed char)119;
int zero = 0;
unsigned long long int var_20 = 13063560849982236023ULL;
unsigned char var_21 = (unsigned char)197;
unsigned int var_22 = 3541404334U;
unsigned long long int var_23 = 6463357778606636863ULL;
unsigned int var_24 = 3716084610U;
signed char var_25 = (signed char)-47;
int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
unsigned short arr_2 [16] ;
unsigned short arr_5 [14] ;
unsigned char arr_3 [16] [16] ;
signed char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -350208224;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 18006556257817674892ULL : 526336843348472780ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13147 : (unsigned short)36305;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)3673;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)171 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-55 : (signed char)39;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
