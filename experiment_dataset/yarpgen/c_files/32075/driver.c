#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5595;
long long int var_2 = -5955889447218813689LL;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)222;
signed char var_11 = (signed char)-31;
long long int var_12 = -8001867297727899553LL;
unsigned char var_13 = (unsigned char)166;
signed char var_14 = (signed char)58;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)(-127 - 1);
long long int var_17 = 8115009055939599949LL;
signed char var_18 = (signed char)-97;
long long int var_19 = 4531113730781939435LL;
short var_20 = (short)-11108;
unsigned long long int arr_0 [23] [23] ;
unsigned int arr_3 [15] ;
unsigned char arr_7 [15] [15] [15] ;
unsigned short arr_8 [15] [15] ;
signed char arr_2 [23] ;
short arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 15665404837150789854ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2576511031U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)176 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)24784;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)8130 : (short)4976;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
