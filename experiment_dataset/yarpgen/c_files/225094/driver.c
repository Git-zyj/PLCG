#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24331;
signed char var_2 = (signed char)14;
short var_3 = (short)-2423;
int var_4 = -518235263;
int var_5 = -490921343;
unsigned char var_6 = (unsigned char)35;
short var_7 = (short)-22775;
short var_8 = (short)29073;
unsigned char var_9 = (unsigned char)122;
unsigned int var_10 = 2471920098U;
unsigned int var_11 = 1676848056U;
int zero = 0;
signed char var_12 = (signed char)18;
unsigned int var_13 = 3966764614U;
long long int var_14 = 5545813800745405982LL;
unsigned long long int var_15 = 4306127447524466559ULL;
unsigned short var_16 = (unsigned short)49713;
signed char var_17 = (signed char)59;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-49;
unsigned long long int var_20 = 1097196311320362674ULL;
unsigned int var_21 = 1135704969U;
unsigned long long int arr_2 [22] ;
unsigned short arr_4 [22] [22] ;
unsigned short arr_7 [22] [22] [22] ;
unsigned short arr_8 [22] [22] [22] ;
unsigned int arr_10 [22] [22] [22] ;
short arr_13 [22] ;
short arr_15 [22] [22] ;
int arr_19 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 16667598013295829672ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)41884;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)21342;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)8802;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3915855202U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (short)-20568;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-28062;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 1048627973 : -518980447;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
