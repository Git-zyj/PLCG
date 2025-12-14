#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4232236919U;
signed char var_2 = (signed char)91;
unsigned long long int var_3 = 4518609973094466377ULL;
unsigned char var_4 = (unsigned char)185;
signed char var_5 = (signed char)-21;
long long int var_6 = 181205784292165718LL;
signed char var_7 = (signed char)-74;
int var_8 = 2046492976;
long long int var_9 = -6285946298221672842LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)200;
unsigned short var_12 = (unsigned short)60793;
unsigned char arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
long long int arr_3 [19] ;
short arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)42384;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -7100964692828261127LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-29852;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
