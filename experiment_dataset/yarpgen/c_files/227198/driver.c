#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31872;
int var_1 = -685077335;
signed char var_3 = (signed char)127;
unsigned char var_6 = (unsigned char)175;
unsigned char var_7 = (unsigned char)29;
int var_10 = -620038807;
unsigned short var_12 = (unsigned short)48595;
unsigned short var_13 = (unsigned short)34356;
unsigned int var_14 = 1029466943U;
unsigned short var_15 = (unsigned short)23130;
signed char var_16 = (signed char)-19;
int zero = 0;
signed char var_17 = (signed char)75;
signed char var_18 = (signed char)76;
unsigned char var_19 = (unsigned char)35;
long long int var_20 = 7176018772835723642LL;
short var_21 = (short)-2527;
signed char var_22 = (signed char)4;
signed char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
_Bool arr_2 [20] ;
unsigned char arr_6 [18] [18] ;
unsigned char arr_9 [16] ;
unsigned short arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
signed char arr_7 [18] ;
unsigned char arr_10 [16] ;
_Bool arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2412044887192618419ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)7324;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 12565061231379474515ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
