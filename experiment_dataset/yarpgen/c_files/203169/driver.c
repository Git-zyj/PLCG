#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25955;
unsigned int var_3 = 1107081963U;
unsigned int var_4 = 1070578297U;
unsigned char var_8 = (unsigned char)11;
unsigned int var_9 = 4054719840U;
unsigned char var_14 = (unsigned char)126;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
unsigned char var_21 = (unsigned char)107;
unsigned char var_22 = (unsigned char)209;
signed char var_23 = (signed char)38;
unsigned int var_24 = 3420063744U;
unsigned char var_25 = (unsigned char)205;
unsigned long long int var_26 = 4296526423140047727ULL;
unsigned char arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
unsigned char arr_2 [22] ;
unsigned char arr_5 [13] ;
short arr_6 [13] ;
int arr_3 [22] ;
unsigned char arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)235 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 974201709U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)7961;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 865129034 : -1760088638;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)220;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
