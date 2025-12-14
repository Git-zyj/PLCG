#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3164222556U;
unsigned long long int var_2 = 3737551758797533211ULL;
signed char var_5 = (signed char)-81;
unsigned long long int var_6 = 4940523881973864209ULL;
unsigned long long int var_7 = 12041179123631354263ULL;
unsigned short var_8 = (unsigned short)33743;
unsigned short var_9 = (unsigned short)58439;
unsigned long long int var_10 = 6644030503470884708ULL;
unsigned long long int var_11 = 13922211597164771348ULL;
unsigned long long int var_13 = 15923542162877314092ULL;
unsigned long long int var_14 = 130650453020564709ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)22300;
unsigned char var_18 = (unsigned char)245;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)108;
int arr_0 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned int arr_4 [22] [22] [22] ;
short arr_5 [22] [22] [22] ;
unsigned int arr_10 [22] [22] [22] [22] ;
signed char arr_16 [22] ;
unsigned char arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1163954803;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 372022272U : 87349990U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)5690 : (short)-29953;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 178853362U : 1916287930U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)71 : (unsigned char)183;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
