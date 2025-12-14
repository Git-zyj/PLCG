#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
unsigned short var_1 = (unsigned short)31198;
_Bool var_2 = (_Bool)0;
int var_3 = -127447203;
long long int var_4 = 2622640463899679444LL;
unsigned int var_5 = 3752771120U;
unsigned int var_7 = 1758202969U;
int var_9 = 1281746032;
int var_10 = -920728528;
unsigned char var_12 = (unsigned char)180;
int var_14 = -321013244;
unsigned short var_15 = (unsigned short)126;
_Bool var_17 = (_Bool)1;
int var_18 = 327707242;
int zero = 0;
unsigned int var_19 = 2889569444U;
short var_20 = (short)-4403;
signed char var_21 = (signed char)-72;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-10433;
int var_24 = 1202115197;
long long int arr_0 [13] [13] ;
signed char arr_2 [13] [13] ;
_Bool arr_3 [13] [13] ;
signed char arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 6983108036585437631LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-101;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
