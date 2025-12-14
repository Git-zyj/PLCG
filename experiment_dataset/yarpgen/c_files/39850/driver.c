#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8295;
unsigned long long int var_3 = 9979596275892401588ULL;
signed char var_4 = (signed char)-8;
short var_5 = (short)-12077;
unsigned long long int var_6 = 16579010191738351310ULL;
unsigned char var_9 = (unsigned char)135;
signed char var_10 = (signed char)60;
unsigned long long int var_11 = 10070514704479837644ULL;
short var_13 = (short)2435;
short var_14 = (short)6026;
unsigned char var_17 = (unsigned char)232;
unsigned long long int var_18 = 9616776784886870329ULL;
int zero = 0;
int var_19 = -1798305287;
unsigned short var_20 = (unsigned short)30794;
short var_21 = (short)-13784;
short var_22 = (short)-31827;
short arr_0 [22] ;
short arr_1 [22] ;
long long int arr_2 [22] [22] ;
int arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
unsigned short arr_11 [18] ;
int arr_3 [22] ;
short arr_6 [25] ;
int arr_7 [25] ;
unsigned long long int arr_8 [25] ;
unsigned long long int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-14385;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-11398 : (short)-31266;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -3641114812780254137LL : -450394408583374211LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1777094754;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)7175;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned short)31383;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1663534742 : 1961009809;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)11021;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 1960715496;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 10032226872034179135ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 6295188581546330563ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
