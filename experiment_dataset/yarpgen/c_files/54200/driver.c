#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)54;
unsigned long long int var_9 = 11099996247386379567ULL;
unsigned int var_16 = 2571450703U;
short var_19 = (short)-20771;
int zero = 0;
long long int var_20 = -13486523302562430LL;
long long int var_21 = 6509511778678744560LL;
long long int var_22 = -1251522990157403921LL;
short var_23 = (short)21492;
int var_24 = -931216843;
unsigned char var_25 = (unsigned char)44;
unsigned short var_26 = (unsigned short)46105;
unsigned short var_27 = (unsigned short)25801;
_Bool arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
int arr_2 [21] ;
int arr_7 [21] ;
unsigned char arr_8 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 926356716U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -860799798;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -106202855;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)61;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
