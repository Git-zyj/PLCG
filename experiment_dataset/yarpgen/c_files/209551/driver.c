#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12852444496057489406ULL;
long long int var_1 = -1258653106143460663LL;
unsigned int var_2 = 320430562U;
unsigned short var_3 = (unsigned short)44366;
unsigned int var_5 = 4088568644U;
unsigned int var_6 = 3791378311U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)197;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)243;
unsigned char var_13 = (unsigned char)178;
unsigned char var_15 = (unsigned char)167;
unsigned int var_17 = 2702486966U;
unsigned char var_18 = (unsigned char)190;
int zero = 0;
short var_20 = (short)-24572;
unsigned int var_21 = 2933665524U;
signed char var_22 = (signed char)-91;
unsigned int var_23 = 2800082798U;
unsigned short var_24 = (unsigned short)57058;
short var_25 = (short)20813;
unsigned char arr_4 [14] ;
unsigned int arr_7 [23] ;
_Bool arr_8 [23] ;
signed char arr_9 [23] [23] [23] ;
long long int arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 2835333303U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = -3042451739743520696LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
