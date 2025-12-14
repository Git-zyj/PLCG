#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)26531;
short var_2 = (short)17889;
unsigned int var_6 = 3247742854U;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)60511;
int zero = 0;
unsigned char var_11 = (unsigned char)23;
short var_12 = (short)5843;
int var_13 = -1582228986;
unsigned char var_14 = (unsigned char)251;
signed char var_15 = (signed char)-70;
unsigned long long int var_16 = 1350632515253570327ULL;
short arr_3 [19] [19] ;
unsigned long long int arr_5 [19] ;
unsigned int arr_6 [22] ;
unsigned int arr_8 [22] [22] ;
_Bool arr_9 [22] [22] [22] ;
unsigned char arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)4528 : (short)-3587;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 12503465806361597355ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 2536894315U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 1700244119U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned char)254;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
